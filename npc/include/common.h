#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <../include/macro.h>

//-------------------------------autoconf.h----------------------------------------//

#define CONFIG_ISA "riscv32"
#define CONFIG_ISA_riscv32 1
#define CONFIG_ISA32 1
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MEM_BASE 0x80000000

#define CONFIG_TIMER_GETTIMEOFDAY 1


//#define CONFIG_TRACE 1

#ifdef CONFIG_TRACE
//#define CONFIG_ITRACE 1
//#define CONFIG_ITRACE_IRINGBUF "true"
//#define CONFIG_WATCHPOINT 1
//#define CONFIG_FTRACE 1
//#define CONFIG_MTRACE 1
//#define CONFIG_DTRACE
#endif

//#define CONFIG_DIFFTEST 1

//#define CONFIG_GTK

//#define CONFIG_DEVICE 1

#ifdef CONFIG_DEVICE
#define CONFIG_HAS_SERIAL 1
#define CONFIG_SERIAL_MMIO 0xa00003f8

#define CONFIG_HAS_TIMER 1
#define CONFIG_RTC_MMIO 0xa0000048

#define CONFIG_HAS_KEYBOARD 1
#define CONFIG_I8042_DATA_MMIO 0xa0000060

#define CONFIG_HAS_VGA 1
#define CONFIG_VGA_SHOW_SCREEN 1
#define CONFIG_VGA_CTL_MMIO 0xa0000100
#define CONFIG_FB_ADDR 0xa1000000

#define CONFIG_VGA_SIZE_400x300 1
#endif

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)

typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef uint16_t ioaddr_t;

#endif
