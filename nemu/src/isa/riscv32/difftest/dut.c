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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char *regs[];

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int reg_num = (int)(sizeof(cpu.gpr) / sizeof(cpu.gpr[0]));
  for (int i = 0; i < reg_num; i++) {
    if (ref_r->gpr[i] != cpu.gpr[i]) {
      printf("reg %s is wrong\n",regs[i]);
      printf("wrong reg value is 0x%08x\n",cpu.gpr[i]);
      printf("right reg value is 0x%08x\n",ref_r->gpr[i]);
      return false;
    }
  }
  if (ref_r->pc != cpu.pc) {
    printf("pc is wrong\n");
    printf("wrong pc is 0x%08x\n",cpu.pc);
    printf("right pc is 0x%08x\n",ref_r->pc);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
