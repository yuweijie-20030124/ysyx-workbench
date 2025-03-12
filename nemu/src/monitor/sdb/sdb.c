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
  } else if(strcmp(args, "p") == 0){
    printf("you print info p\n");
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
static int cmd_x(char *args) {
  if (args == NULL || *args == '\0') {
      printf("Not enough parameters, two parameters are needed: quantity address (example: x 10 0x80000000) \n");
      return 0;
  }

  // 分割参数
  char *count_str = strtok(args, " ");
  char *addr_str = strtok(NULL, " ");

  // 检查参数数量
  if (addr_str == NULL) {
      printf("需要两个参数：数量 地址（示例：x 10 0x80000000）\n");
      return 0;
  }

  // 解析数量
  char *endptr;
  errno = 0; // 用于检测溢出
  long count = strtol(count_str, &endptr, 10);
  if (*endptr != '\0' || count <= 0) {
      if (errno == ERANGE) {
          printf("数量超出范围，请输入合理的正整数\n");
      } else {
          printf("数量必须为正整数（非法字符：%s）\n", endptr);
      }
      return 0;
  }

  // 解析地址
  errno = 0;
  unsigned long address = strtoul(addr_str, &endptr, 0); // 自动识别进制
  if (*endptr != '\0' || addr_str[0] == '\0') {
      printf("地址无效，请输入合法地址（示例：0x80000000）。错误字符：%s\n", endptr);
      return 0;
  }

  // 可选：检查地址是否在合法范围内（根据你的模拟器实际情况调整）
  if (address < 0x80000000 || address > 0x8FFFFFFF) {
      printf("地址超出模拟器允许范围（0x80000000 ~ 0x8FFFFFFF）\n");
      return 0;
  }

  // 执行内存扫描操作（此处为示例）
  printf("正在从地址 0x%lX 开始扫描 %ld 字节内存...\n", address, count);
  // TODO: 添加实际的内存读取代码

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
  { "q", "Exit NEMU", cmd_q },


  /* TODO: Add more commands */

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
