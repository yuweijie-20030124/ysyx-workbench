#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "memory.h"
#include <readline/readline.h>
#include <readline/history.h>


static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

void sdb_set_batch_mode() {
  is_batch_mode = true;
}









void init_sdb() {
  init_regex();

  init_wp_pool();
}
