#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "memory.h"
#include <readline/readline.h>
#include <readline/history.h>
#include "reg.h"


#define MAX_ENTRIES 1000  // 假设最多1000组数据
#define MAX_BUF_LEN 512   // 每行buf的最大长度

static int is_batch_mode = false;


void init_regex();
void init_wp_pool();
void add_watch(char *expr,word_t addr);
void display_watch();
void remove_watch(int num);
void cpu_exec(uint64_t n);
void isa_reg_display();
word_t expr(char *e, bool *success);


typedef struct {
    int result;
    char buf[MAX_BUF_LEN];
} ResultEntry;

ResultEntry entries[MAX_ENTRIES];  // 存储所有结果的数组
int entry_count = 0;               // 当前存储的条目数

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }
  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
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

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_si(char *args) {
  if (args == NULL) {
    // int inst = get_inst();
    // printf("inst = 0x%08x\n",inst);
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

static int cmd_q(char *args) {
  //printf("%d",NPC_QUIT);
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_p(char *args) {
    bool success;
    if(strcmp(args, "test") == 0) {
        char str[5000];
        uint64_t answer;
        bool all_correct = true;
        FILE *fp = fopen("/home/yuweijie/ysyx-workbench/nemu/tools/gen-expr/build/input", "r");
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
  //vaddr_t addr = 0x80000000;
  if (success!=true){
      printf("ERRO!!\n");
      return 0;
  }
  if(addr>=0x80000000 && addr<= 0x87ffffff){
    //printf("我进来咯~");
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

static int cmd_d(char *args) {
  char *NUM  = strtok(NULL, " ");
  int num = atoi(NUM);
  remove_watch(num);
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

void sdb_mainloop() {
  if (is_batch_mode) {
    //printf("fuck npc\n");
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
  init_regex();

  init_wp_pool();
}
