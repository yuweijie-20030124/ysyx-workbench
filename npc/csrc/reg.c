#include <isa.h>
#include "reg.h"
// #include "Vysyx_25060170_top__Dpi.h"
#include "svdpi.h"
#include "assert.h"

//这个 C 告诉编译器以C类型进行编译

extern "C" void GPR_SEND_VALUE(word_t *, word_t *, word_t *, word_t *,
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *
                          );


int i = 0;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


void isa_reg_display() {
  const svScope scope = svGetScopeFromName("TOP.ysyx_25060170_top.u_ysyx_25060170_GPR");
  assert(scope);
  svSetScope(scope);

  GPR_SEND_VALUE(
               &cpu.gpr[1] , &cpu.gpr[2] , &cpu.gpr[3] , &cpu.gpr[4] , 
               &cpu.gpr[5] , &cpu.gpr[6] , &cpu.gpr[7] , &cpu.gpr[8] , 
               &cpu.gpr[9] , &cpu.gpr[10], &cpu.gpr[11], &cpu.gpr[12], 
               &cpu.gpr[13], &cpu.gpr[14], &cpu.gpr[15], &cpu.gpr[16], 
               &cpu.gpr[17], &cpu.gpr[18], &cpu.gpr[19], &cpu.gpr[20], 
               &cpu.gpr[21], &cpu.gpr[22], &cpu.gpr[23], &cpu.gpr[24], 
               &cpu.gpr[25], &cpu.gpr[26], &cpu.gpr[27], &cpu.gpr[28], 
               &cpu.gpr[29], &cpu.gpr[30], &cpu.gpr[31]
              );

  for (int i = 0; i < 32; i++) {
    printf("%s\t0x%08x\t%d\n", reg_name(i), gpr(i), gpr(i));
  }
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






