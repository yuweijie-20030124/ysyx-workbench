#include <proc.h>

#define MAX_NR_PROC 4

static PCB pcb[MAX_NR_PROC] __attribute__((used)) = {};
static PCB pcb_boot = {};
PCB *current = NULL;
static int current_idx = -1;

void switch_boot_pcb() {
  current = &pcb_boot;
  current_idx = -1;
}

void hello_fun(void *arg) {
  int j = 1;
  while (1) {
    if (j % 100000 == 0) {
      Log("Hello World from Nanos-lite with arg '%s' for the %dth time!", (const char *)arg, j);
    }
    j ++;
    yield();
  }
}

void context_kload(PCB *pcb, void (*entry)(void *), void *arg) {
  Area kstack = {
    .start = pcb->stack,
    .end = pcb->stack + STACK_SIZE,
  };
  pcb->cp = kcontext(kstack, entry, arg);
}

void init_proc() {
  Log("Initializing processes...");

  char *const nterm_argv[] = {"/bin/nterm", NULL};
  char *const nterm_envp[] = {NULL};

  context_kload(&pcb[0], hello_fun, "A");
  context_uload(&pcb[1], "/bin/nterm", nterm_argv, nterm_envp);
  switch_boot_pcb();
}

Context* schedule(Context *prev) {
  if (current != &pcb_boot) {
    current->cp = prev;
  }

  current_idx = (current_idx + 1) % 2;
  current = &pcb[current_idx];
  return current->cp;
}
