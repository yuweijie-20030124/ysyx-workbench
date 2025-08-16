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

#include <dlfcn.h>

#include <isa.h>
#include <common.h>
#include <memory.h>
#include <difftest.h>
#include "svdpi.h"

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void isa_reg_display();

extern "C" void GPR_SEND_VALUE(word_t *, word_t *, word_t *, word_t *,
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *, word_t *, 
                           word_t *, word_t *, word_t *
                          );

const char *nemu_regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
                          
#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  // printf("diff_so_file = %s\n",ref_so_file);
  // printf("img_size = %ld\n",img_size);
  assert(ref_so_file != NULL);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);//打开传入的动态库文件 ref_so_file
  assert(handle);
  //打开动态链接对动态库中API符号进行符号解析和重定位，返回他们的地址，
  ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) =  (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

bool isa_difftest_checkregs(NPC_reg *ref_r, vaddr_t pc) {
  int reg_num = (int)(sizeof(cpu.gpr) / sizeof(cpu.gpr[0]));
  
  // printf("pc = 0x%08x!!!!!\n",cpu.pc);

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
  // printf("进来啦!!!!!!!!!\n");
  for (int i = 0; i < reg_num; i++) {
    if (cpu.gpr[i] != ref_r->gpr[i]) {
        //  printf("进来啦!!!!!!!!!\n");
        //  printf("i = %d\n",i);
        //  printf("cpu.gpr = %d\n",cpu.gpr[i]);
         printf("different reg is %s\n",nemu_regs[i]);
         printf("error register is %08x\t%d\n",cpu.gpr[i],cpu.gpr[i]);
         printf("right register is = %08x\t%d\n",ref_r->gpr[i],ref_r->gpr[i]);
         printf("reg wrong!!!!!!!!!\n");
         printf("\n");
         printf("        nemu reg:\n");
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
           nemu_regs[i], ref_r->gpr[i], ref_r->gpr[i], notes);

    // 每4个寄存器后加分隔线
    if ((i + 1) % 4 == 0 && i != 31) {
      printf("├───────────────────┼───────────────┼────────────────┼───────────────────┤\n");
    }
  }
        printf("\n");
      return false;
    }
  }
  // printf("difftest cpu.pc    = 0x%08x\n",cpu.pc);
  // printf("difftest ref_r->pc = 0x%08x\n",ref_r->pc);
  if (cpu.pc != ref_r->pc) {
        //printf("进来啦!!!!!!!!!\n");
        printf("pc wrong!!!!!!!!!\n");
        printf("wrong pc = 0x%08x\n",cpu.pc);
        printf("right pc = 0x%08x\n",ref_r->pc);
        printf("\n");
        printf("        nemu reg:\n");
        
        printf("\n");
  printf("┌───────────────────┬───────────────┬────────────────┬───────────────────┐\n");
  printf("│      Register     │  Hex Value    │  Decimal Value │      Notes        │\n");
  printf("├───────────────────┼───────────────┼────────────────┼───────────────────┤\n");

  for (int j = 0; j < 32; j++) {
    // 特殊标记常用寄存器
    const char *notes = "";
    if (j == 1) notes = "Return Address";
    if (j == 2) notes = "Stack Pointer";
    if (j == 10) notes = "Argument/Return";
    if (j == 15) notes = "MMIO Base Addr";

    printf("│ %-17s │ 0x%08x    │ %-14d │ %-17s │\n", 
           nemu_regs[j], ref_r->gpr[j], ref_r->gpr[j], notes);
      
    // 每4个寄存器后加分隔线
    if ((j + 1) % 4 == 0 && j != 31) {
      printf("├───────────────────┼───────────────┼────────────────┼───────────────────┤\n");
    }
  }
        printf("\n");

        printf("\n");
    return false;
  }
  return true;
}

static void checkregs(NPC_reg *ref, vaddr_t pc) {
    //printf("进来啦!!!!!!!!!\n");
  if (!isa_difftest_checkregs(ref, pc)) {
    // printf("!!!!!!!!!************\n");
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    printf("        npc reg:\n");
    
    isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  NPC_reg ref_r;
  
  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    // printf("i am in \n");
    // printf("skip cpu.pc = 0x%08x\n",cpu.pc);
    // int inst = get_inst();
    // printf("skip inst = 0x%08x\n",inst);
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  //printf("进来啦!!!!!!!!!\n");
  // printf("difftest_step pc = 0x%08x, npc = 0x%08x\n", pc, npc);
  if (skip_dut_nr_inst > 0) {
    // printf("进来啦!!!!!!!!!>0\n");
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      // printf("进来啦!!!!!!!!!=npc\n");
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif
