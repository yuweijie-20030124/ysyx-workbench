#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <verilated.h>
#include "Vysyx_25060170_top.h"   //包含top模块的顶层类
#include <verilated_vcd_c.h> //向VCD文件中写入文件

#define MAX_SIM_TIME 300
#define VERIF_START_TIME 7

/*
0000000 00000 00000 000 00000 0010011

imm[11:0] = 000000000000 (立即数 0)

rs1 = 00000 (x0)

funct3 = 000 (addi 的操作码)

rd = 00000 (x0)

opcode = 0010011 (I-type 指令的操作码)
*/

extern "C" void npc_trap() {
    Verilated::gotFinish(true); // 通知 Verilator 结束仿真
}

extern "C" int addr_to_instruction(int addr) {
    int instruction[5] = {
        0x00100093,
        0x00108113,
        0x00110193,
        0x00118213,
        0x00100073 // ebreak
    };
    int idx = (addr - 0x80000000) / 4;
    if (idx < 0 || idx >= 5) return 0;
    return instruction[idx];
}
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
/*
int main(int argc, char** argv) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);//打开追踪功能
    Vtop* top = new Vtop{contextp};
    VerilatedVcdC *wave = new VerilatedVcdC;
    top->trace(wave,0);
    int PC = 0x80000000; //假设PC初始值为0x80000000
    wave->open("waveform.vcd");
    while (!contextp->gotFinish()) {
         
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        //assert(top->f == (a ^ b));//验证一下电路正确性，不对的话直接退出
        wave->dump(contextp->time());
        contextp->timeInc(1);//推动仿真时间
      }
    wave->close();
    delete top;
    delete contextp;
    delete wave;
    exit(EXIT_SUCCESS);
    return 0;
}    
*/