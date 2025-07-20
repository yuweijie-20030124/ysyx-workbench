#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <readline/readline.h>
#include <readline/history.h>

static int is_batch_mode = false;

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(NPC) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}