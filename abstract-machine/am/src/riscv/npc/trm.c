#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "../riscv.h"

extern char _data_vma_start;
extern char _data_vma_end;
extern char _data_lma;
extern char _bss_start;
extern char _bss_end;
extern char _heap_start;
extern char _sram_start;

int main(const char *args);

extern char _pmem_start;

#define UART_BASE 0x10000000L
#define UART_TX   (UART_BASE + 0x00)

#define PMEM_SIZE (128 * 1024 * 1024)
#define SRAM_SIZE (1024)

#define PMEM_END  ((uintptr_t)&_sram_start + PMEM_SIZE)

//申请的堆放在sram中，sram地址范围 [0X0F00_0000 ~ 0X0FFF_FFFF]
// Area heap = RANGE(&_heap_start, PMEM_SIZE);
Area heap = RANGE(&_heap_start, (&_heap_start) + 1024); //结构用于指示堆区的启始和末尾
// Area heap = RANGE(&_heap_start, SRAM_SIZE);

static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

// void putch(char ch) {
//    outb(SERIAL_PORT, ch);
// }

/* 在 _trm_init 中或者被 _start 调用的初始化函数里做以下工作 */
void bootloader_copy_data_and_clear_bss() {
  uintptr_t dst = (uintptr_t)&_data_vma_start;    // VMA -> SRAM 地址（运行时访问地址）
  uintptr_t src = (uintptr_t)&_data_lma;          // LMA -> MROM 中保存初值的地址
  size_t len = (size_t)((uintptr_t)&_data_vma_end - dst);

  if (len > 0) {
    /* 从 MROM 的 LMA 复制到 SRAM 的 VMA */
    memcpy((void *)dst, (void *)src, len);
  }

  /* 清零 bss */
  uintptr_t bss = (uintptr_t)&_bss_start;
  size_t bss_len = (size_t)((uintptr_t)&_bss_end - bss);
  if (bss_len > 0) {
    memset((void *)bss, 0, bss_len);
  }
}

void putch(char ch) {
  //  outb(UART_TX, ch);
  *(volatile uint8_t *)UART_TX = ch;
}

void halt(int code) {
  asm volatile("mv a0, %0" : : "r"(code)); 
  asm volatile("ebreak");
  while (1);
}


void _trm_init() {
  bootloader_copy_data_and_clear_bss();
  int ret = main(mainargs); //用户程序
  halt(ret);
}

