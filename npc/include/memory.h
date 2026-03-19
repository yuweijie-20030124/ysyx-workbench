#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <cstdint>
#include "common.h"

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)

paddr_t host_read(void *addr, int len);

void host_write(void *addr, int len, paddr_t data);



#ifdef __cplusplus
extern "C" {
#endif

word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

#ifdef __cplusplus
}
#endif



word_t vaddr_ifetch(vaddr_t addr, int len);

word_t vaddr_read(vaddr_t addr, int len);

void vaddr_write(vaddr_t addr, int len, word_t data);

void init_mem();

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

static inline bool in_mrom(paddr_t addr) {
  return addr - CONFIG_MROM_MBASE < CONFIG_MROM_MSIZE;
}

uint8_t* guest_to_host(paddr_t addr);


word_t mrom_memory_read(paddr_t addr, int len);
uint8_t* mrom_guest_to_host(paddr_t addr);


#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

#endif