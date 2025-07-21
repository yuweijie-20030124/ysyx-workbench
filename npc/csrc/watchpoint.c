#include

#define NR_WP 32



typedef struct watchpoint {
  int NO;
  char expr[1000];
  word_t last;//上一次的值
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
