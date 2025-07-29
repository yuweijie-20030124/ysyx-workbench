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
VerilatedVcdC* tfp;
#endif

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

//void init_monitor(int argc, char *argv[]);

/*
0000000 00000 00000 000 00000 0010011

imm[11:0] = 000000000000 (立即数 0)

rs1 = 00000 (x0)

funct3 = 000 (addi 的操作码)

rd = 00000 (x0)

opcode = 0010011 (I-type 指令的操作码)
*/

/*
int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);

    Vysyx_25060170_top* top = new Vysyx_25060170_top{contextp};
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("waveform.vcd");

    // 初始化信号
    top->clk = 0;
    top->rst = 1;
    top->ready_i = 1;

    for (vluint64_t sim_time = 0; sim_time < MAX_SIM_TIME && !contextp->gotFinish(); sim_time++) {
        // 时钟上升沿
        top->clk = !top->clk;
        if (sim_time == 2) top->rst = 0; // 复位释放

        top->eval();
        tfp->dump(sim_time);

        //可选：打印寄存器或信号，便于调试
        //printf("pc = %08x\n", top->pc);

        // 时钟下降沿
        top->clk = !top->clk;
        top->eval();
        tfp->dump(sim_time + 0.5);
    }

    tfp->close();
    delete top;
    delete tfp;
    delete contextp;
    return 0;
}
*/

int main(int argc, char** argv) {

  contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	top = new Vysyx_25060170_top{contextp};

	init_monitor(argc,argv);
	cpu_reset();

  sdb_mainloop();
	//sdb_mainloop();
	
	
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