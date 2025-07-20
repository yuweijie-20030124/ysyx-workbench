#ifndef memory_H
#define memory_H

#include <../include/common.h>

uint8_t* guest_to_host(paddr_t paddr);

paddr_t host_to_guest(uint8_t *haddr);

uint64_t host_read(void *addr, int len);

void host_write(void *addr, int len, uint64_t data);

void init_mem();

#endif