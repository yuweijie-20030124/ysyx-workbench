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

#define MAX_ENTRIES 100  // 假设最多1000组数据
#define MAX_BUF_LEN 512   // 每行buf的最大长度

typedef struct {
    int result;
    char buf[MAX_BUF_LEN];
} ResultEntry;

ResultEntry entries[MAX_ENTRIES];  // 存储所有结果的数组
int entry_count = 0;               // 当前存储的条目数

static void collect() {//收集input文件中的所有result和buf
    FILE *file;
    char line[MAX_BUF_LEN];
    int result;
    char buf[MAX_BUF_LEN];

    file = popen("/home/yuweijie/ysyx-workbench/nemu/tools/gen-expr/gen-expr", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    while (fgets(line, sizeof(line), file)) {
        // 匹配 "the result is xxx , the buf is yyy" 格式
        if (sscanf(line, "the result is %d , the buf is %[^\n]", &result, buf) == 2) {
            if (entry_count < MAX_ENTRIES) {
                entries[entry_count].result = result;
                strncpy(entries[entry_count].buf, buf, MAX_BUF_LEN - 1);
                entries[entry_count].buf[MAX_BUF_LEN - 1] = '\0';  // 确保字符串终止
                entry_count++;
            } else {
                fprintf(stderr, "Warning: Reached maximum entry limit (%d)\n", MAX_ENTRIES);
                break;
            }
        }
    }

    pclose(file);
}

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

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
    //display_watch();
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

//example：x 10 0x80000000
//printf("0x%08x\n",vaddr_read(0x80000000, 4));

static int cmd_x(char *args){
  //获取内存起始地址和扫描长度。扫描内存
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
  if (success!=true){
      printf("ERRO!!\n");
      return 0;
  }
  //char *str;
  //vaddr_t addr =  strtol( EXPR,&str,16 );
  vaddr_t addr = expr(EXPR,&success);
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

static int cmd_w(char *args) {
  
  return 0;
  }

static int cmd_d(char *args) {
  
  return 0;
}

static int cmd_p(char *args) {
  bool success;
  if(strcmp(args, "test") == 0) {
    char str[3000];
    uint64_t answer;
    FILE *fp=fopen("/home/yuweijie/ysyx-workbench/nemu/tools/gen-expr/build/input","r");
    assert(fp!=NULL);
    while(fscanf(fp,"%lu %[^\n]",&answer,str)>0){
      uint64_t result=expr(str,&success);
      if(result!=answer){
        printf("Wrong calculate for %s, right answer: %lu, wrong calculate: %lu\n",str,answer,result);
      }
      else{printf("Right calculate for %s, answer=result=%lu\n",str,result);}
    }
    fclose(fp);
    printf("Test passed.\n");
  }
  else{
  uint64_t result = expr(args,&success);
  if(!success){
    printf("wrong calculate in expr\n");
	}
  else{
    printf("%lu\n",result);
    }
  }
      return 0;
}

static int cmd_ptest() {
  collect();

  // 打印所有提取的 result 和 buf
  printf("Extracted Results (Total: %d):\n", entry_count);
  printf("-----------------------------\n");
  for (int i = 0; i < entry_count; i++) {
      printf("[%d] Result: %d\n", i + 1, entries[i].result);
      printf("    Buf: %s\n", entries[i].buf);
      printf("-----------------------------\n");
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
  { "ptest", "evaluation test", cmd_ptest },
  { "q", "Exit NEMU", cmd_q },

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
