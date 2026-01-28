#include <isa.h>
#include "reg.h"
// #include "Vysyx_25060170_top__Dpi.h"
#include "assert.h"


int i = 0;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char *csrs[] = {
  "mcause","mstatus","mepc","mtvec","mhartid","mscratch"
};

void isa_reg_display() {
    printf("PC      : 0x%08x %d\n", cpu.pc, cpu.pc);
    for (int i = 0; i < 32; i++) {
    printf("%-4s    : 0x%08x %-11d  ", reg_name(i), gpr(i), gpr(i));
    if ((i + 1) % 4 == 0) printf("\n");
    }
    printf("mcause  : 0x%08x %-11d  "  , cpu.csr[0], cpu.csr[0]);
    printf("mstatus : 0x%08x %-11d  "  , cpu.csr[1], cpu.csr[1]);
    printf("mepc    : 0x%08x %-11d  "  , cpu.csr[2], cpu.csr[2]);
    printf("mtvec   : 0x%08x %-11d  \n", cpu.csr[3], cpu.csr[3]);
    printf("mhartid : 0x%08x %-11d  "  , cpu.csr[4], cpu.csr[4]);
    printf("mscratch: 0x%08x %-11d  "  , cpu.csr[5], cpu.csr[5]);
}

//讲寄存器名字符转换为对应的寄存器值
word_t isa_reg_str2val(const char *s, bool *success) {
  int idx=0;
  char str[10];
  strcpy(str,s+1); //去除最左边的$
  if(strcmp(str,"pc")==0) return cpu.pc; //如果是pc那就返回cpu.pc的值
  for(int i=0;i<MUXDEF(CONFIG_RVE, 16, 32);i++){
    if(strcmp(regs[i],str)==0){
      idx=i; //返回索引值
      break;
    }
    if(i==31) *success=false;
  }
  return gpr(idx);
}

/**************************** DPI-C *******************************/






