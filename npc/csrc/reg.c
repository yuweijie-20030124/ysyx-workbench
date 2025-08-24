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


void isa_reg_display() {
  printf("\n");
  printf("┌───────────────────┬───────────────┬────────────────┬───────────────────┐\n");
  printf("│      Register     │  Hex Value    │  Decimal Value │      Notes        │\n");
  printf("├───────────────────┼───────────────┼────────────────┼───────────────────┤\n");

  for (int i = 0; i < 32; i++) {
    // 特殊标记常用寄存器
    const char *notes = "";
    if (i == 1) notes = "Return Address";
    if (i == 2) notes = "Stack Pointer";
    if (i == 10) notes = "Argument/Return";
    if (i == 15) notes = "MMIO Base Addr";

    printf("│ %-17s │ 0x%08x    │ %-14d │ %-17s │\n", 
           reg_name(i), gpr(i), gpr(i), notes);

    // 每4个寄存器后加分隔线
    if ((i + 1) % 4 == 0 && i != 31) {
      printf("├───────────────────┼───────────────┼────────────────┼───────────────────┤\n");
    }
  }

  printf("└───────────────────┴───────────────┴────────────────┴───────────────────┘\n");
  printf("\n");

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






