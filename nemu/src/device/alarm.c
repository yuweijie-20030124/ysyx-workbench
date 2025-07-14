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

#include <common.h>
#include <device/alarm.h>
#include <sys/time.h>
#include <signal.h>
//定时器系统，主要用于周期性地触发一系列处理函数
#define MAX_HANDLER 8 
//handler数组最多存储8哥定时处理函数

static alarm_handler_t handler[MAX_HANDLER] = {};
static int idx = 0; //ids记录当前已组测的处理函数数量

//注册定时处理函数，将传入的处理函数h添加到handler数组中，检查不超过max即可。
void add_alarm_handle(alarm_handler_t h) {
  assert(idx < MAX_HANDLER);
  handler[idx ++] = h;
}
//信号处理函数，当定时信号sigvtalrm除法时被调用，遍历所有已组测的处理函数并依次执行他们
static void alarm_sig_handler(int signum) {
  int i;
  for (i = 0; i < idx; i ++) {
    handler[i]();
  }
}

/*设置信号处理：
将alarm_sig_handler注册为SIGVTALRM信号的处理函数
使用sigaction()系统调用完成注册*/
void init_alarm() {
  struct sigaction s;
  memset(&s, 0, sizeof(s)); //清空s中的值
  s.sa_handler = alarm_sig_handler;
  int ret = sigaction(SIGVTALRM, &s, NULL);
  Assert(ret == 0, "Can not set signal handler");

  struct itimerval it = {};
  it.it_value.tv_sec = 0;
  it.it_value.tv_usec = 1000000 / TIMER_HZ;
  it.it_interval = it.it_value;
  ret = setitimer(ITIMER_VIRTUAL, &it, NULL);
  Assert(ret == 0, "Can not set timer");
}
