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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <cpu/watchpoint.h>
#include <cpu/ringbuffer.h>
//#include "/home/yuweijie/ysyx-workbench/nemu/src/isa/riscv32/include/isa-def.h"
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CircularBuffer cb;

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();
int update_watchpoint(void);

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
//开了itrace就进去这个if里面
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); } //感觉在这里是输出指令的日志
#endif
  //一次执行十条以下的指令gps就会赋值为true。
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  #ifdef CONFIG_WATCHPOINT
    if (update_watchpoint() > 0) {
        nemu_state.state = NEMU_STOP;
    }
#endif
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;//当前指令地址
  s->snpc = pc;//静态下一条指令地址，默认为pc+4
  isa_exec_once(s);
  cpu.pc = s->dnpc;//动态下一条指令，可能跳转或者分支改变
#ifdef CONFIG_ITRACE//如果启用了 CONFIG_ITRACE，会记录指令的详细信息到日志缓冲区 s->logbuf：
  char *p = s->logbuf;
  //snprintf() 是一个 C 语言标准库函数，用于格式化输出字符串，并将结果写入到指定的缓冲区，
  //与 sprintf() 不同的是，snprintf() 会限制输出的字符数，避免缓冲区溢出。
  //int snprintf ( char * str, size_t size, const char * format, ... );
  //str -- 目标字符串，用于存储格式化后的字符串的字符数组的指针。   size -- 字符数组的大小。
  //format -- 格式化字符串。    ... -- 可变参数，可变数量的参数根据 format 中的格式化指令进行格式化。
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);//FMT_WORD：格式化字符串（如 "0x%08x"），用于输出 PC 地址。
  //printf("0x%08x\n",s->pc);
  //printf("0x%08x\n",s->snpc);
  int ilen = s->snpc - s->pc; //计算指令长度
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst;
  // printf("inst = 0x%08x\n",s->isa.inst);
  // printf("inst ***= 0x%08x\n", *inst);
#ifdef CONFIG_ISA_x86
  for (i = 0; i < ilen; i ++) { //x86是小段，从低地址开始打印
#else
  for (i = ilen - 1; i >= 0; i --) {//riscv是大段，从高地址开始打印
#endif
    p += snprintf(p, 4, " %02x", inst[i]); //把指令打印出来
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4); //不是x86ilenmax就是4
  int space_len = ilen_max - ilen;   //计算需要填充的空格数
  if (space_len < 0) space_len = 0; //
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);//反汇编指令
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,   //将反汇编指令出来后传到logbuf里面
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst, ilen);
            //muxdef，有点像  ？：，
  enqueue(&cb, s->logbuf);

#endif
}
/*代码会对一个用于记录客户指令的计数器加1, 然后进行一些trace和difftest相关的操作(此时先忽略), 
然后检查NEMU的状态是否为NEMU_RUNNING, 若是, 则继续执行下一条指令, 否则则退出执行指令的循环.*/
static void execute(uint64_t n) {
  Decode s;
  initBuffer(&cb); // 初始化环形缓冲区，大小为BUFFER_SIZE
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }/*条件编译宏，如果CONFIG_DEVICE被定义，则调用device_update函数，如果 CONFIG_DEVICE 没有被定义，
  这一行什么都不会生成（等价于被注释掉）。*/
  printBuffer(&cb);
}

//如果退出就执行statistic
//输出数字格式的本地化信息，   “”表示为 用户环境变量中的默认设置。
static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));

#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {//输出错误信息
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);//一次执行太多步就不打印了，bool类型的gprintstep就赋值为false
  printf("%d\n",nemu_state.state);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT: case NEMU_QUIT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;//如果状态是结束了，出错了，退出了就打印“退出nemu”。
    default: nemu_state.state = NEMU_RUNNING;//默认running
  }

  uint64_t timer_start = get_time();//获取执行指令前的时间

  execute(n);

  uint64_t timer_end = get_time();//获取执行指令后的时间
  g_timer += timer_end - timer_start; //看执行了多久。

  switch (nemu_state.state) { 
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
        //nemu出错或者异常退出就用红色打印，正常退出就绿色打印。  
        (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
