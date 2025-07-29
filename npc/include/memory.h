#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <cstdint>
#include "common.h"

#define PMEM_LEFT  ((paddr_t)CONFIG_MEM_BASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MEM_BASE + CONFIG_MSIZE - 1)

paddr_t host_read(void *addr, int len);

void host_write(void *addr, int len, paddr_t data);

word_t paddr_read(paddr_t addr, int len);

void paddr_write(paddr_t addr, int len, word_t data);

word_t vaddr_ifetch(vaddr_t addr, int len);

word_t vaddr_read(vaddr_t addr, int len);

void vaddr_write(vaddr_t addr, int len, word_t data);

void init_mem();

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MEM_BASE < CONFIG_MSIZE;
}

uint8_t* guest_to_host(paddr_t addr);

int get_inst();

#endif