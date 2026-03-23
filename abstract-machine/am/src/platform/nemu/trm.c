#include <am.h>
#include <klib.h>
#include <nemu.h>
#include <stdio.h>

extern char __data_vma_start;
extern char __data_vma_end;
extern char __data_lma;
extern char __bss_start;
extern char __bss_end;
extern char _heap_start;
extern char _sram_start;

int main(const char *args);

Area heap = RANGE(&_sram_start, SRAM_END); //结构用于指示堆区的启始和末尾

static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

/* 在 _trm_init 中或者被 _start 调用的初始化函数里做以下工作 */
void bootloader_copy_data_and_clear_bss() {
  uintptr_t dst = (uintptr_t)&__data_vma_start;    // VMA -> SRAM 地址（运行时访问地址）
  uintptr_t src = (uintptr_t)&__data_lma;          // LMA -> MROM 中保存初值的地址
  size_t len = (size_t)((uintptr_t)&__data_vma_end - dst);

  if (len > 0) {
    /* 从 MROM 的 LMA 复制到 SRAM 的 VMA */
    memcpy((void *)dst, (void *)src, len);
  }

  /* 清零 bss */
  uintptr_t bss = (uintptr_t)&__bss_start;
  size_t bss_len = (size_t)((uintptr_t)&__bss_end - bss);
  if (bss_len > 0) {
    memset((void *)bss, 0, bss_len);
  }
}

void putch(char ch) { //输出一个字符
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  // printf("halt called with code: %d\n", code);
  //fflush(stdout);
  nemu_trap(code);
  // should not reach here
  while (1);
}

void _trm_init() {
  bootloader_copy_data_and_clear_bss();
  int ret = main(mainargs); //用户程序
  halt(ret);
}
