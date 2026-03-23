#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"


extern char _heap_start;
extern char _sram_start;

int main(const char *args);

extern char _pmem_start;

// #define UART_BASE 0x10000000L
// #define UART_TX   (UART_BASE + 0x00)

#define PMEM_SIZE (128 * 1024 * 1024)
#define SRAM_SIZE (1024)

#define PMEM_END  ((uintptr_t)&_sram_start + PMEM_SIZE)

//申请的堆放在sram中，sram地址范围 [0X0F00_0000 ~ 0X0FFF_FFFF]
// Area heap = RANGE(&_heap_start, PMEM_SIZE);
Area heap = RANGE(&_heap_start, SRAM_SIZE);

static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

// void putch(char ch) {
//    outb(SERIAL_PORT, ch);
// }
void putch(char ch) {
   outb(UART_TX, ch);
}

void halt(int code) {
  asm volatile("mv a0, %0" : : "r"(code)); 
  asm volatile("ebreak");
  while (1);
}

extern char _bss_start;
extern char _bss_end;
extern char _data_lma;
extern char _data;
extern char edata;

void _trm_init() {
  // Bootloader: copy data from MROM to SRAM
  char *src = &_data_lma;
  char *dst = &_data;
  while (dst < &edata) {
    *dst++ = *src++;
  }

  // Clear BSS
  dst = &_bss_start;
  while (dst < &_bss_end) {
    *dst++ = 0;
  }

  int ret = main(mainargs);
  halt(ret);
}
