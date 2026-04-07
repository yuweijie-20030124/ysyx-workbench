/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>
#include <memory/vaddr.h>
#include <cpu/difftest.h>

#define MAX_ENTRIES 1000  // 假设最多1000组数据
#define MAX_BUF_LEN 512   // 每行buf的最大长度

void init_regex();
void init_wp_pool();
void add_watch(char *expr,word_t addr);
void display_watch();
void remove_watch(int num);

typedef struct {
    int result;
    char buf[MAX_BUF_LEN];
} ResultEntry;

ResultEntry entries[MAX_ENTRIES];  // 存储所有结果的数组
int entry_count = 0;               // 当前存储的条目数

static int is_batch_mode = false;

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_si(char *args) {
  if (args == NULL) {
    cpu_exec(1);
    return 0;
  }

  int i = atoi(args);
  if (i <= 0) {
    printf("Invalid argument '%s'\n", args);
  } else {
    cpu_exec(i);
  }

  return 0;
}

static int cmd_info(char *args) {
  if (args == NULL) {
    printf("print r to see register status\n");
    printf("print p to see watchpoint\n");
    return 0;
  }

  if (strcmp(args, "r") == 0) {
    isa_reg_display();
  } 
  else if(strcmp(args, "p") == 0){
    display_watch();
  }
    else{
    printf("print r or p, not'%s'\n", args);
    }
  return 0;
}

static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_x(char *args){
  if(args == NULL){
      printf("too few parameter! \n");
      return 1;
  } 
  char *arg = strtok(args," ");
  if(arg == NULL){
      printf("too few parameter!! \n");
      return 0;
  }
  int  n = atoi(arg);
  char *EXPR = strtok(NULL," ");
  if(EXPR == NULL){                                                                                                                                          
      printf("too few parameter!!! \n");
      return 0;
  }
  bool success = true;
  vaddr_t addr = expr(EXPR,&success);
  if (success!=true){
      printf("ERRO!!\n");
      return 0;
  }
  if(addr>=0x80000000 && addr<= 0x87ffffff){
  for(int i = 0 ; i < n ; i++){
      uint32_t data = vaddr_read(addr + i * 4,4);
      printf("0x%08x  " , addr + i * 4 );
      for(int j =0 ; j < 4 ; j++){
          printf("0x%02x " , data & 0xff);
          data = data >> 8 ;
      }
      printf("\n");
  }
}
  else printf("you are out of bound\n");     
  return 0;
}  

static int cmd_d(char *args) {
  char *NUM  = strtok(NULL, " ");
  int num = atoi(NUM);
  remove_watch(num);
  return 0;
}

static int cmd_w(char *args) {
  char *EXPR  = strtok(NULL, " ");
  if(EXPR==NULL){
    Log(" error expression\n");
    return 0;
  }
  bool flag=true;
  word_t addr = expr(EXPR,&flag);
  if(flag==false){
    Log("error expression\n");
    return 0;
  }
  add_watch(EXPR,addr);
  return 0;
}

static int cmd_p(char *args) {
    bool success;
    if(strcmp(args, "test") == 0) {
        char str[5000];
        uint64_t answer;
        bool all_correct = true;
        FILE *fp = fopen(NEMU_HOME_STR "/tools/gen-expr/build/input", "r");
        assert(fp != NULL);
        
        while(fscanf(fp, "%lu %[^\n]", &answer, str) > 0) {
            uint64_t result = expr(str, &success);
            if(!success || result != answer) {
                printf("calculate wrong,the expr is \"%s\"\n", str);
                printf("your answer is: %lu, the true answer is: %lu\n",result,answer);
                all_correct = false;
                printf("tests not pass\n");
                break;  
            }
        }
        fclose(fp);
        if(all_correct) {
            printf("all tests pass\n");
        }
    }
    else {
        uint64_t result = expr(args, &success);
        if(!success) {
            printf("表达式计算错误\n");
        }
        else {
            printf("%lu\n", result);
        }
    }
    return 0;
}


static int cmd_detach(char *args) {
  difftest_detach();
  return 0;
}

static int cmd_attach(char *args) {
  difftest_attach();
  return 0;
}

#define SNAPSHOT_MAGIC "NEMUSNP"
#define SNAPSHOT_MAGIC_SIZE 8
#define SNAPSHOT_VERSION 1

typedef struct {
  char magic[SNAPSHOT_MAGIC_SIZE];
  uint32_t version;
  uint32_t cpu_state_size;
  uint32_t nemu_state_size;
  uint32_t paddr_size;
  uint64_t pmem_size;
  uint64_t pmem_left;
} SnapshotHeader;

static char *snapshot_path(char *args) {
  if (args == NULL) {
    return NULL;
  }

  while (*args == ' ' || *args == '\t') {
    args ++;
  }
  if (*args == '\0') {
    return NULL;
  }

  char *end = args + strlen(args);
  while (end > args && (end[-1] == ' ' || end[-1] == '\t' || end[-1] == '\n')) {
    end --;
  }
  *end = '\0';
  return args;
}

static bool write_exact(FILE *fp, const void *buf, size_t size, const char *what) {
  if (fwrite(buf, 1, size, fp) != size) {
    printf("Failed to write %s: %s\n", what, strerror(errno));
    return false;
  }
  return true;
}

static bool read_exact(FILE *fp, void *buf, size_t size, const char *what) {
  if (fread(buf, 1, size, fp) != size) {
    printf("Failed to read %s: %s\n", what, feof(fp) ? "unexpected end of file" : strerror(errno));
    return false;
  }
  return true;
}

static bool snapshot_header_match(const SnapshotHeader *header) {
  if (memcmp(header->magic, SNAPSHOT_MAGIC, SNAPSHOT_MAGIC_SIZE) != 0) {
    printf("Invalid snapshot file: bad magic\n");
    return false;
  }
  if (header->version != SNAPSHOT_VERSION) {
    printf("Unsupported snapshot version: %u\n", header->version);
    return false;
  }
  if (header->cpu_state_size != sizeof(cpu) ||
      header->nemu_state_size != sizeof(nemu_state) ||
      header->paddr_size != sizeof(paddr_t) ||
      header->pmem_size != CONFIG_MSIZE ||
      header->pmem_left != PMEM_LEFT) {
    printf("Snapshot does not match this NEMU build\n");
    return false;
  }
  return true;
}

static int cmd_save(char *args) {
  char *path = snapshot_path(args);
  if (path == NULL) {
    printf("Usage: save /absolute/path/to/snapshot\n");
    return 0;
  }

  FILE *fp = fopen(path, "wb");
  if (fp == NULL) {
    printf("Failed to open snapshot '%s': %s\n", path, strerror(errno));
    return 0;
  }

  SnapshotHeader header = {
    .magic = SNAPSHOT_MAGIC,
    .version = SNAPSHOT_VERSION,
    .cpu_state_size = sizeof(cpu),
    .nemu_state_size = sizeof(nemu_state),
    .paddr_size = sizeof(paddr_t),
    .pmem_size = CONFIG_MSIZE,
    .pmem_left = PMEM_LEFT,
  };

  bool ok = write_exact(fp, &header, sizeof(header), "snapshot header") &&
            write_exact(fp, &cpu, sizeof(cpu), "CPU state") &&
            write_exact(fp, &nemu_state, sizeof(nemu_state), "NEMU state") &&
            write_exact(fp, guest_to_host(PMEM_LEFT), CONFIG_MSIZE, "physical memory");

  if (fclose(fp) != 0) {
    printf("Failed to close snapshot '%s': %s\n", path, strerror(errno));
    ok = false;
  }

  if (ok) {
    printf("Snapshot saved to %s\n", path);
  }
  return 0;
}

static int cmd_load(char *args) {
  char *path = snapshot_path(args);
  if (path == NULL) {
    printf("Usage: load /absolute/path/to/snapshot\n");
    return 0;
  }

  FILE *fp = fopen(path, "rb");
  if (fp == NULL) {
    printf("Failed to open snapshot '%s': %s\n", path, strerror(errno));
    return 0;
  }

  SnapshotHeader header;
  bool ok = read_exact(fp, &header, sizeof(header), "snapshot header") &&
            snapshot_header_match(&header) &&
            read_exact(fp, &cpu, sizeof(cpu), "CPU state") &&
            read_exact(fp, &nemu_state, sizeof(nemu_state), "NEMU state") &&
            read_exact(fp, guest_to_host(PMEM_LEFT), CONFIG_MSIZE, "physical memory");

  if (fclose(fp) != 0) {
    printf("Failed to close snapshot '%s': %s\n", path, strerror(errno));
    ok = false;
  }

  if (ok) {
    if (nemu_state.state == NEMU_RUNNING) {
      nemu_state.state = NEMU_STOP;
    }
    difftest_attach();
    printf("Snapshot loaded from %s\n", path);
  }
  return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "si", "execute one step", cmd_si },
  { "info", "use 'info r' to show register status ***and*** use 'info w' to show watch point message", cmd_info },
  { "x", "scan memory", cmd_x },
  { "p", "expression evaluation", cmd_p },
  { "w", "creat watchpoint", cmd_w },
  { "d", "delete watchpoint", cmd_d },
  { "q", "Exit NEMU", cmd_q },
  { "detach", "Disable DiffTest checking", cmd_detach },
  { "attach", "Synchronize REF state and enable DiffTest checking", cmd_attach },
  { "save", "Save NEMU snapshot to a file", cmd_save },
  { "load", "Load NEMU snapshot from a file", cmd_load },
  /* TODO: Add more commands cmd_d*/
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
