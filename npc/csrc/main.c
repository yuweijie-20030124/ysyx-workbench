#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include "Vysyx_25060170_top.h"   //包含top模块的顶层类
#include <verilated_vcd_c.h> //向VCD文件中写入文件
#include <common.h>
#include <memory.h>
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

/**************************** DPI-C *******************************/

extern "C" void pmem_read(paddr_t raddr, paddr_t* rdata, int rlen){

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

extern "C" void set_npc_exit(vaddr_t pc, int halt_ret){
  npc_state.state = NPC_END;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
}

extern "C" void pc_inst_end(int thepc_data, int the_inst){
  cpu.pc = thepc_data;
  s.val = the_inst;
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
  printf("***reset***\n");
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif  

  top -> clk = 1;
  top -> rst = 1;
  top -> eval();
#ifdef CONFIG_GTK
  tfp -> dump(main_time++);
#endif  

  top -> rst = 0;

}