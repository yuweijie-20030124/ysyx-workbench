#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "memory.h"
#include <readline/readline.h>
#include <readline/history.h>

#define MAX_ENTRIES 1000  // 假设最多1000组数据
#define MAX_BUF_LEN 512   // 每行buf的最大长度

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void add_watch(char *expr,word_t addr);
void display_watch();
void remove_watch(int num);
void cpu_exec(uint64_t n);


typedef struct {
    int result;
    char buf[MAX_BUF_LEN];
} ResultEntry;

ResultEntry entries[MAX_ENTRIES];  // 存储所有结果的数组
int entry_count = 0;               // 当前存储的条目数

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

static int cmd_q(char *args) {
  //printf("%d",NPC_QUIT);
  npc_state.state = NPC_QUIT;
  return -1;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
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
  //{ "info", "use 'info r' to show register status ***and*** use 'info w' to show watch point message", cmd_info },
  //{ "x", "scan memory", cmd_x },
  //{ "p", "expression evaluation", cmd_p },
  //{ "w", "creat watchpoint", cmd_w },
  //{ "d", "delete watchpoint", cmd_d },
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
