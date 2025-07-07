#include <am.h>
#include <nemu.h>

extern char _heap_start;
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END); //结构用于指示堆区的启始和末尾

static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) { //输出一个字符
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  nemu_trap(code);
  //里面是一个嵌入汇编语句，宏会把一个识别结束的结束码移动到通用寄存器中
  // should not reach here
  while (1);
}

void _trm_init() {
  int ret = main(mainargs); //用户程序
  halt(ret);
}
