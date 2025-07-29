#include "memory.h"
#include "common.h"

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


uint8_t mem[CONFIG_MSIZE] = {0};
// Memory transfer
uint8_t* guest_to_host(paddr_t addr) { return mem + (addr - CONFIG_MEM_BASE); }

const static uint32_t img [] = {
  0x00130393,   // addi t2, t1, 1    t2 = t1 + 1
  0x00c000ef,   // jal ra ,80000010  跳转到 PC + 0xC0，并保存返回地址到 ra
  0x00240493,   // addi s1, s0, 2    s1 = s0 + 2
  0x00350593,   // addi a1, a0, 3    a1 = a0 + 3 
  0x00460693,   // addi a3, a2, 4    a3 = a2 + 4
  0x00570793,	  // addi a5, a4, 5    a5 = a4 + 5
  0x00100073,   // ebreak (used as nemu_trap)
  0x0000006f,   // j self*/
};


void init_mem() {
  /* Load built-in image. */
  memcpy(guest_to_host(0x80000000), img, sizeof(img));
  //printf("Memory at 0x80000000: 0x%08x\n", *(uint32_t *)guest_to_host(0x80000000));
 } 