#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }
    c = user_handler(ev, c);
    assert(c != NULL);
  }
  return c;
}

extern void __am_asm_trap(void);
//函数作用：接收参数，上面的软件需要给cte传handler，第一件事情设置mtvec，设置的入口在__am_asm_trap
//以后处理器抛异常，pc就会跳转到mtvec的这个__am_asm_trap地址里面，在trap.S中定义了__am_asm_trap。
//第二件事情把传进来的handler回调函数做一个注册，设置到一个全局变量中
bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
  
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
