#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include "Vysyx_25060170_top.h"   //包含top模块的顶层类
#include <verilated_vcd_c.h> //向VCD文件中写入文件
#include <common.h>
#include <memory.h>
#include <mmio.h>
#include "isa.h"

#define MAX_SIM_TIME 300
#define VERIF_START_TIME 7

void close_npc();
void init_monitor(int argc, char *argv[]);
void cpu_reset();
void sdb_mainloop();
int is_exit_status_bad();

Vysyx_25060170_top* top;
VerilatedContext* contextp;
#ifdef CONFIG_GTK
VerilatedVcdC* tfp = new VerilatedVcdC(); //导出vcd波形需要加此语句
#endif
vluint64_t main_time = 0;

/******************************* DPI-C ********************************/

/**************************** read and write ****************************/
extern "C" void pmem_read(paddr_t raddr, paddr_t* rdata, char rlen){

  if (raddr < CONFIG_MEM_BASE) return;
  if (likely(in_pmem(raddr))) {
    *rdata = host_read(guest_to_host(raddr),rlen);
    //printf("C:raddr = 0x%08x\n",raddr);
    //printf("C:rdata1 = 0x%08x\n",*rdata);
    //printf("C:rdata2 = 0x%08x\n",*(uint32_t *)guest_to_host(0x80000000));
    return;
    }
   //IFDEF(CONFIG_DEVICE, *rdata = mmio_read(raddr, rlen); /*printf("%lx\n",raddr);*/return);
   return;
}

static inline int maskToLen(uint8_t mask) {
  switch (mask) {
    case 0x01: case 0x02: case 0x04: case 0x08: return 1;  // 32位: 4个字节位置
    case 0x03: case 0x0c: return 2;                        // 32位: 2种2字节组合
    case 0x0f: return 4;                                   // 32位: 4字节
    default: assert(0);
  }
}

// Memory Write for 32-bit system
// extern "C" void pmem_write(uint32_t waddr, uint32_t wdata, uint8_t wlen) {
//   if (waddr < CONFIG_MEM_BASE) return;
  
// #ifdef CONFIG_MTRACE
//   Log("Write to memory at %#.8x with mask %x, content is %#.8x", waddr, wlen, wdata);
// #endif

//   int len = 0;
  
//   if (likely(in_pmem(waddr))) {
//     // 32位系统，对齐到4字节边界
//     uint32_t addr = waddr & ~0x3u;
    
//     // 最多处理4个字节
//     for (int i = 0; i < 4; ++i) {
//       if (wlen & 0x01) {  // 检查当前字节是否需要写入
//         host_write(guest_to_host(addr + i), 1, wdata & 0xFF);  // 写入1字节
//         wdata >>= 8;      // 准备下一个字节
//       }
//       wlen >>= 1;         // 检查下一个掩码位
//     }
//     return; 
//   }
//   else {
//     len = maskToLen(wlen);
//   }
  
// #ifdef CONFIG_DEVICE
//   mmio_write(waddr, len, wdata);
// #endif
//   return;
// }

extern "C" void pmem_write(uint32_t waddr, uint32_t wdata, uint8_t wlen) {
}
/*******************************NPC_STATUS*******************************/

extern "C" void set_npc_exit(vaddr_t pc, int halt_ret){
  npc_state.state = NPC_END;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
  // printf("exit\n");
}

extern "C" void pc_inst_end(int thepc_data, int the_inst){
  cpu.pc = thepc_data;
  s.val = the_inst;
}

extern "C" void difftest_dut_csr(int csr_mstatus, int csr_mtvec, int csr_mepc, int csr_mcause){
    cpu.csr[0] = csr_mstatus & 0x0ull ;
    cpu.csr[1] = csr_mtvec;
    cpu.csr[2] = csr_mepc;    
    cpu.csr[3] = csr_mcause;
   // isa_reg_display();
}

/*******************************DIFFTEST*******************************/

extern "C" void difftest_dut_regs(int Z0, int ra, int sp, int gp, int tp, int t0, int t1, int t2, int fp, int s1, int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9, int s10, int a11, int t3, int t4, int t5, int t6){
  cpu.gpr[0]  = Z0  ;
  cpu.gpr[1]  = ra  ;
  cpu.gpr[2]  = sp  ;
  cpu.gpr[3]  = gp  ;
  cpu.gpr[4]  = tp  ;
  cpu.gpr[5]  = t0  ;
  cpu.gpr[6]  = t1  ;
  cpu.gpr[7]  = t2  ;
  cpu.gpr[8]  = fp  ;
  cpu.gpr[9]  = s1  ;
  cpu.gpr[10] = a0  ;
  cpu.gpr[11] = a1  ;
  cpu.gpr[12] = a2  ;
  cpu.gpr[13] = a3  ;
  cpu.gpr[14] = a4  ;
  cpu.gpr[15] = a5  ;
  cpu.gpr[16] = a6  ;
  cpu.gpr[17] = a7  ;
  cpu.gpr[18] = s2  ;
  cpu.gpr[19] = s3  ;
  cpu.gpr[20] = s4  ;
  cpu.gpr[21] = s5  ;
  cpu.gpr[22] = s6  ;
  cpu.gpr[23] = s7  ;
  cpu.gpr[24] = s8  ;
  cpu.gpr[25] = s9  ;
  cpu.gpr[26] = s10 ;
  cpu.gpr[27] = a11 ;
  cpu.gpr[28] = t3  ;
  cpu.gpr[29] = t4  ;
  cpu.gpr[30] = t5  ;
  cpu.gpr[31] = t6  ;
}

/***********************************************END DPI-C*******************************************/
int main(int argc, char** argv) {

  contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
  Verilated::traceEverOn(true);
	top = new Vysyx_25060170_top{contextp};

  #ifdef CONFIG_GTK
    top->trace(tfp, 0);
    tfp->open("waveform.vcd");
  #endif  
  cpu_reset();
	init_monitor(argc,argv);
  cpu_reset();

  sdb_mainloop();
	//sdb_mainloop();
	//多记录一个数据
	tfp -> dump(main_time++);
	//is_exit_status_bad();

    close_npc();

    return is_exit_status_bad();
}

void isa_exec_once(){
  top-> clk = 0;
  top -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif  

  top -> clk = 1;
  top -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif

}

void close_npc(){
#ifdef CONFIG_GTK
	tfp->close() ;
#endif
	delete top ;
	delete contextp ;
      
#ifdef CONFIG_GTK
  delete tfp;
#endif
  
	exit(0) ;
	
}

void cpu_reset(){
  top -> clk = 0;
  top -> rst = 1;  
  top -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif  

  printf("***reset***\n");

  top -> clk = 1;
  top -> rst = 1;
  top -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif  

  top -> rst = 0;

}