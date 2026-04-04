#include "memory.h"
#include "common.h"
#include "reg.h"
#include "svdpi.h"
#include <stdio.h>

void mmio_write(paddr_t addr, int len, word_t data);
word_t mmio_read(paddr_t addr, int len);

paddr_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    IFDEF(CONFIG_ISA64, case 8: return *(paddr_t *)addr);
    default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}

void host_write(void *addr, int len, paddr_t data) {
  //printf("%lx\n",(uint64_t *)addr);
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    IFDEF(CONFIG_ISA64, case 8: *(paddr_t *)addr = data; return);
    IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}


//读0x8000000内存
word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

//读mrom 0x20000000内存
word_t mrom_memory_read(paddr_t addr, int len) {
  if (len <= 0) return 0;
  if (!in_mrom(addr) || !in_mrom(addr + len - 1)) return 0;
  word_t ret = host_read(mrom_guest_to_host(addr), len);
  return ret;
}

//读sram 0x0f000000~0x0fffffff
word_t sram_memory_read(paddr_t addr, int len) {
  if (len <= 0) return 0;
  if (!in_sram(addr) || !in_sram(addr + len - 1)) return 0;
  word_t ret = host_read(sram_guest_to_host(addr), len);
  return ret;
}

//读flash0x30000000 ~ 0x3fffffff
word_t flash_memory_read(paddr_t addr, int len) {
  if (len <= 0) return 0;
  if (!in_flash(addr) || !in_flash(addr + len - 1)) return 0;
  word_t ret = host_read(flash_guest_to_host(addr), len);
  return ret;
}

//写内存0x80000000
void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

//不能写mrom 不可写 0x2000000

//检查内存0x80000000是否越界
void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void mrom_out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, MROM_LEFT, MROM_RIGHT, cpu.pc);
}

void sram_out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, SRAM_LEFT, SRAM_RIGHT, cpu.pc);
}

//读物理地址
word_t paddr_read(paddr_t addr, int len) {
  //printf("进来了\n"); 
  if (likely(in_pmem(addr))) {
    IFDEF(CONFIG_MTRACE, Log("read in address = " FMT_PADDR ", len = %d\n", addr, len));
    return pmem_read(addr, len);
  }

  if (likely(in_mrom(addr))) {
    IFDEF(CONFIG_MTRACE, Log("mrom read in address = " FMT_PADDR ", len = %d\n", addr, len));
    return mrom_memory_read(addr, len);
  }

  if (likely(in_sram(addr))) {
    IFDEF(CONFIG_MTRACE, Log("sram read in address = " FMT_PADDR ", len = %d\n", addr, len));
    return sram_memory_read(addr, len);
  }

  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));

  out_of_bound(addr);
  return 0;
}

//写物理地址
void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) {
    pmem_write(addr, len, data);
    IFDEF(CONFIG_MTRACE, Log("write in address = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data));
    return;
  }

  if (likely(in_sram(addr))) {
    IFDEF(CONFIG_MTRACE, Log("sram write in address = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data));
    host_write(sram_guest_to_host(addr), len, data);
    return;
  }

  if (likely(in_mrom(addr))) {
    /* MROM is read-only: ignore or panic on writes. Here we panic to catch bugs. */
    mrom_out_of_bound(addr);
    return;
  }

  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);

  out_of_bound(addr);
}

word_t vaddr_ifetch(vaddr_t addr, int len) {
  return paddr_read(addr, len);
}

//读地址 == 取指
word_t vaddr_read(vaddr_t addr, int len) {
  return paddr_read(addr, len);
}
//写地址
void vaddr_write(vaddr_t addr, int len, word_t data) {
  paddr_write(addr, len, data);
}


uint8_t mem[CONFIG_MSIZE] = {0};

uint8_t mrom_mem[CONFIG_MROM_MSIZE] = {0};  // 为 MROM 分配独立内存

uint8_t sram_mem[CONFIG_SRAM_MSIZE] = {0};  // 为 SRAM 分配独立内存

uint8_t flash_mem[CONFIG_SRAM_MSIZE] = {0};  // 为 FLASH 分配独立内存

// Memory transfer
uint8_t* guest_to_host(paddr_t addr) { return mem + (addr - CONFIG_MBASE); }

uint8_t* mrom_guest_to_host(paddr_t addr) { return mrom_mem + (addr - CONFIG_MROM_MBASE); }

uint8_t* sram_guest_to_host(paddr_t addr) { return sram_mem + (addr - CONFIG_SRAM_MBASE); }

uint8_t* flash_guest_to_host(paddr_t addr) { return flash_mem + (addr - CONFIG_FLASH_MBASE); }

const static uint32_t img [] = {
  0x00100073,   // ebreak (used as nemu_trap)     0x8000_0018
  0x00130393,   // addi t2, t1, 1    t2 = t1 + 1  0x8000_0000
  0x00c000ef,   // jal ra ,80000010               0x8000_0004 
  0x00240493,   // addi s1, s0, 2    s1 = s0 + 2  0x8000_0008 这个一定不执行
  0x00350593,   // addi a1, a0, 3    a1 = a0 + 3  0x8000_000C 这个一定不执行
  0x00460693,   // addi a3, a2, 4    a3 = a2 + 4  0x8000_0010 跳到这里来
  0x00570793,	  // addi a5, a4, 5    a5 = a4 + 5  0x8000_0014
  0x00100073,   // ebreak (used as nemu_trap)     0x8000_0018
  0x0000006f,   // j self*/
};

const static uint32_t mrom_img [] = {
  0x00100073,   // ebreak (used as nemu_trap)     0x20000000
  0x00100073,   // ebreak (used as nemu_trap)     0x20000004
  0x00100073,   // ebreak (used as nemu_trap)     0x20000008
  0x00100073,   // ebreak (used as nemu_trap)     0x2000000C
  0x0000006f,   // j self*/
};

const static uint32_t sram_img [] = {
  0x00100073,   // ebreak (used as nemu_trap)     0x20000000
  0xdeadbeef,   // deadbeef
  0x00100073,   // ebreak (used as nemu_trap)     0x20000004
  0x00100073,   // ebreak (used as nemu_trap)     0x20000008
  0x00100073,   // ebreak (used as nemu_trap)     0x2000000C
  0x0000006f,   // j self*/
};

const static uint32_t flash_img [] = {
  0x00100073,   // ebreak (used as nemu_trap)     0x20000000
  0xdeadbeef,   // deadbeef
  0x00100073,   // ebreak (used as nemu_trap)     0x20000004
  0x00100073,   // ebreak (used as nemu_trap)     0x20000008
  0x00100073,   // ebreak (used as nemu_trap)     0x2000000C
  0x0000006f,   // j self*/
};

//在ysyxSoc中输出第一个字符

void init_mem() {
  /* Load built-in image. */
  // mrom read_only  0x20000000 0x20000ffff
  memcpy(mrom_guest_to_host(MROM_RESET_VECTOR), mrom_img, sizeof(mrom_img));
  // sram 0x0f00_0000~0x0fff_ffff
  memcpy(sram_guest_to_host(SRAM_RESET_VECTOR), sram_img, sizeof(sram_img));
  //pmem 0x80000000~0x8ffffff
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
  // flash 0x0f00_0000~0x0fff_ffff
  memcpy(flash_guest_to_host(FLASH_RESET_VECTOR), sram_img, sizeof(sram_img));

  //printf("Memory at 0x80000000: 0x%08x\n", *(uint32_t *)guest_to_host(0x80000000));
} 


//  extern "C" word_t paddr_read(paddr_t addr, int len) {
//   //printf("进来了\n"); 
//   if (likely(in_pmem(addr))) { 
//     //printf("进来了\n"); 
//     IFDEF(CONFIG_MTRACE, Log("read in address = " FMT_PADDR ", len = %d\n", addr, len));
//     return pmem_read(addr, len);
//   }
//   IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
//   //printf("");
//   out_of_bound(addr);
//   return 0;
// }

// //写物理地址
// extern "C" void paddr_write(paddr_t addr, int len, word_t data) {
//   if (likely(in_pmem(addr))) { 
//     pmem_write(addr, len, data);
//     IFDEF(CONFIG_MTRACE, Log("write in address = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data));
//     return; }
  
//   IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
//   out_of_bound(addr);
//   //Log("weiwei");
// }
