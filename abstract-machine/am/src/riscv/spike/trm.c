#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include "htif.h"

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END ((uintptr_t)0x80000000 + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);//
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) { //打印字符
  htif_console_putchar(ch);
}

void halt(int code) { //用于结束程序的运行
  printf("Exit with code = %d\n", code);
  htif_poweroff();  //通过HTIF协议通知模拟器关机。HTIF 是 RISC-V 架构中定义的一种主机-目标机通信协议
  //用于模拟器和RISC-V目标及之间的交互。

  // should not reach here
  while (1);
}

void _trm_init() {    //进行TRM相关的初始化工作
  int ret = main(mainargs);//会在这个main函数里面执行用户代码
  halt(ret);
}
