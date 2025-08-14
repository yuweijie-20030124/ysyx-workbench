#include "memory.h"
#include "common.h"
#include "reg.h"
#include "svdpi.h"

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

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

//读物理地址
word_t paddr_read(paddr_t addr, int len) {
  //printf("进来了\n"); 
  if (likely(in_pmem(addr))) { 
    //printf("进来了\n"); 
    IFDEF(CONFIG_MTRACE, Log("read in address = " FMT_PADDR ", len = %d\n", addr, len));
    return pmem_read(addr, len);
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  //printf("");
  out_of_bound(addr);
  return 0;
}

//写物理地址
void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { 
    pmem_write(addr, len, data);
    IFDEF(CONFIG_MTRACE, Log("write in address = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data));
    return; }
  
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
  //Log("weiwei");
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


 extern "C" void IDU_SEND_INST(word_t *);
 
 int get_inst(){
  const svScope scope = svGetScopeFromName("TOP.ysyx_25060170_top.u_ysyx_25060170_IDU");
  assert(scope);
  svSetScope(scope);
  word_t inst;
  IDU_SEND_INST(&inst);
  return inst;
 }

  extern "C" void IDU_SEND_PC(word_t *);
 
 int get_pc(){
  const svScope scope = svGetScopeFromName("TOP.ysyx_25060170_top.u_ysyx_25060170_IFU");
  assert(scope);
  svSetScope(scope);
  word_t pc;
  IDU_SEND_PC(&pc);
  return pc;
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
 