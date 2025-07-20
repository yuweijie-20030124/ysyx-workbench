
#include "memory.h"
#include <readline/readline.h>
#include <readline/history.h>


static int is_batch_mode = false;

void sdb_set_batch_mode() {
  is_batch_mode = true;
}