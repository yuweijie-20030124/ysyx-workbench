#include <common.h>
#include <stdlib.h>
#include <sys/time.h>

static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
  struct timeval now;
  //在C语言中可以使用函数gettimeofday()函数来得到精确时间。它的精度可以达到微妙，是C标准库的函数。
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  //将时间结构体 now 中的秒（tv_sec）和微秒（tv_usec）合并为一个以微秒为单位的 64 位无符号整数（uint64_t）
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();//初始化启动时间
  uint64_t now = get_time_internal();     //或取当前时间
  return now - boot_time;       //返回时间差
}

void init_rand() {
  srand(get_time_internal());
  //srand是随机数发生器
}