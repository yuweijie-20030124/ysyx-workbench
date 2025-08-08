/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "local-include/reg.h"
#include "/home/yuweijie/ysyx-workbench/nemu/src/isa/riscv32/include/isa-def.h"
int i = 0;
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "haox", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  for (int i = 0; i < 32; i++) {
    printf("%s\t0x%08x\t%d\n", reg_name(i), gpr(i), gpr(i));
  }
    printf("mcause\t0x%08x\t%d\n",cpu.mcause,cpu.mcause);
    printf("mstatus\t0x%08x\t%d\n",cpu.mstatus,cpu.mstatus);
    printf("mepc\t0x%08x\t%d\n",cpu.mepc,cpu.mepc);
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

//riscv32_CPU_state
// void diff_get_regs(riscv32_CPU_state *diff_context){
//   for (int i = 0; i < 32; i++) {
//     diff_context->gpr[i] = cpu.gpr[i];
//   }
//   diff_context -> pc = cpu.pc;
// }  
