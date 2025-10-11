#include <am.h>
#include "../riscv.h"
#include <stdio.h>
uint32_t init_time_us;
uint32_t init_time_s;

void __am_timer_init() {
  // init_time_s = inl(RTC_ADDR + 4);
  // init_time_us = inl(RTC_ADDR);
 // printf("%d  %d\n",init_time_s,init_time_us);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t h = inl(RTC_ADDR + 4);
  uint32_t l = inl(RTC_ADDR);
  uptime->us = (uint32_t)l + ((uint64_t)h << 32);
  //printf("%d,,, \n",now_time_us);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 2025;
}