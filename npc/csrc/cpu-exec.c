#include <locale.h>
#include "isa.h"
#include "common.h"

void isa_exec_once();

NPC_reg cpu = { .pc =0x80000000};
Decode s;
NPC_State npc_state = { .state = NPC_QUIT };

#define MAX_INST_TO_PRINT 10

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
int flag = 0;


static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;//当前指令地址
  s->snpc = pc;//静态下一条指令地址，默认为pc+4
  isa_exec_once();
  cpu.pc = s->dnpc;//动态下一条指令，可能跳转或者分支改变
#ifdef CONFIG_ITRACE//如果启用了 CONFIG_ITRACE，会记录指令的详细信息到日志缓冲区 s->logbuf：
  char *p = s->logbuf;
  //snprintf() 是一个 C 语言标准库函数，用于格式化输出字符串，并将结果写入到指定的缓冲区，
  //与 sprintf() 不同的是，snprintf() 会限制输出的字符数，避免缓冲区溢出。
  //int snprintf ( char * str, size_t size, const char * format, ... );
  //str -- 目标字符串，用于存储格式化后的字符串的字符数组的指针。   size -- 字符数组的大小。
  //format -- 格式化字符串。    ... -- 可变参数，可变数量的参数根据 format 中的格式化指令进行格式化。
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);//FMT_WORD：格式化字符串（如 "0x%08x"），用于输出 PC 地址。
  int ilen = s->snpc - s->pc; //计算指令长度
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst;
  for (i = ilen - 1; i >= 0; i --) {//riscv是大段，从高地址开始打印
    p += snprintf(p, 4, " %02x", inst[i]); //把指令打印出来
  }
  int ilen_max = 4; 
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

static void execute(uint64_t n) {
  Decode s;
  //initBuffer(&cb); // 初始化环形缓冲区，大小为BUFFER_SIZE
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    //trace_and_difftest(&s, cpu.pc);
    if (npc_state.state != NPC_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }/*条件编译宏，如果CONFIG_DEVICE被定义，则调用device_update函数，如果 CONFIG_DEVICE 没有被定义，
  这一行什么都不会生成（等价于被注释掉）。*/
  //printBuffer(&cb);
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
  //isa_reg_display();
  statistic();
}

void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);//一次执行太多步就不打印了，bool类型的gprintstep就赋值为false
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT: case NPC_QUIT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;//如果状态是结束了，出错了，退出了就打印“退出nemu”。
    default: npc_state.state = NPC_RUNNING;//默认running
  }

  uint64_t timer_start = get_time();//获取执行指令前的时间

  execute(n);

  uint64_t timer_end = get_time();//获取执行指令后的时间
  g_timer += timer_end - timer_start; //看执行了多久。

  switch (npc_state.state) { 
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
        //nemu出错或者异常退出就用红色打印，正常退出就绿色打印。  
        (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
  }
}