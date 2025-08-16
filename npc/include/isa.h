#ifndef __ISA_H__
#define __ISA_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} NPC_reg;

// decode
typedef struct Decode {
  word_t pc;
  word_t snpc; // static next pc
  word_t val;
  IFDEF(CONFIG_ITRACE, char logbuf[128]);
} Decode;

extern NPC_reg cpu;
extern Decode s;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif