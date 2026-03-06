#include <am.h>
#include <nemu.h>

// CLINT mtime 计数器每周期增加 1
// 软件需要根据频率换算成实际时间
// 对于仿真环境，假设每周期对应 1 微秒 (CLINT_FREQ_HZ = 1e6)
// 因此 mtime / 1e6 = 微秒数
#define CLINT_FREQ_HZ 1000000  // 1 MHz (每周期 1 us)

void __am_timer_init() {
  // CLINT 是自动计数的, 无需初始化
  // 仅用于初始化检查
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  // 读 mtime 的高 32 位和低 32 位, 组合成 64 位值
  // 注意: RISC-V 上软件必须先读低 32 位, 再读高 32 位, 
  // 然后再读一次低 32 位来处理溢出情况 (如果低32位溢出了高32位会改变)
  // 但对于仿真这样做太复杂, 简化实现: 直接读高低两次
  
  uint32_t lo, hi, lo2;
  
  do {
    lo = inl(RTC_ADDR);       // mtime 低 32 位 (0xa0000048)
    hi = inl(RTC_ADDR + 4);   // mtime 高 32 位 (0xa000004C)
    lo2 = inl(RTC_ADDR);      // 再读一次低 32 位, 检查是否溢出
  } while (lo2 < lo);         // 如果 lo2 < lo, 说明读取期间低32位溢出了, 需要重新读
  
  // 组合 64 位 mtime 值
  uint64_t mtime = ((uint64_t)hi << 32) | lo2;
  
  // mtime 每周期 +1, CLINT_FREQ_HZ = 1e6 (Hz)
  // 所以 1 mtime = 1 / 1e6 秒 = 1 微秒
  // uptime->us = mtime / (CLINT_FREQ_HZ / 1e6) = mtime (微秒)
  uptime->us = mtime;
}


void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  // RTC (实时时钟) 在当前简化实现中不支持
  // 返回固定值或 0
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 1;
  rtc->month  = 1;
  rtc->year   = 2024;
}

