#include <common.h>
#include <fs.h>
#include <memory.h>
#include <sys/time.h>
#include "syscall.h"

#define CONFIG_STRACE 0

#if CONFIG_STRACE
#define STRACE_LOG(...) Log(__VA_ARGS__)
#else
#define STRACE_LOG(...)
#endif

#if CONFIG_STRACE
#define STRACE_FD(fd) fs_fd_name(fd)
#else
#define STRACE_FD(fd) NULL
#endif

static const char *syscall_names[] = {
  [SYS_exit] = "exit",
  [SYS_yield] = "yield",
  [SYS_open] = "open",
  [SYS_read] = "read",
  [SYS_write] = "write",
  [SYS_kill] = "kill",
  [SYS_getpid] = "getpid",
  [SYS_close] = "close",
  [SYS_lseek] = "lseek",
  [SYS_brk] = "brk",
  [SYS_fstat] = "fstat",
  [SYS_time] = "time",
  [SYS_signal] = "signal",
  [SYS_execve] = "execve",
  [SYS_fork] = "fork",
  [SYS_link] = "link",
  [SYS_unlink] = "unlink",
  [SYS_wait] = "wait",
  [SYS_times] = "times",
  [SYS_gettimeofday] = "gettimeofday",
};

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  const char *name = "unknown";

  if (a[0] < LENGTH(syscall_names) && syscall_names[a[0]] != NULL) {
    name = syscall_names[a[0]];
  }
  (void)name;

  switch (a[0]) {
    case SYS_open:
      STRACE_LOG("syscall: %s(\"%s\", %d, %d)", name, (const char *)a[1], a[2], a[3]);
      c->GPRx = fs_open((const char *)a[1], a[2], a[3]);
      STRACE_LOG("syscall return: %s -> %d (%s)", name, c->GPRx, STRACE_FD(c->GPRx));
      break;
    case SYS_read:
      STRACE_LOG("syscall: %s(%d:%s, %p, %d)", name, a[1], STRACE_FD(a[1]), a[2], a[3]);
      c->GPRx = fs_read(a[1], (void *)a[2], a[3]);
      STRACE_LOG("syscall return: %s -> %d", name, c->GPRx);
      break;
    case SYS_yield:
      STRACE_LOG("syscall: %s()", name);
      c->GPRx = 0;
      STRACE_LOG("syscall return: %s -> %d", name, c->GPRx);
      break;
    case SYS_write:
      STRACE_LOG("syscall: %s(%d:%s, %p, %d)", name, a[1], STRACE_FD(a[1]), a[2], a[3]);
      c->GPRx = fs_write(a[1], (const void *)a[2], a[3]);
      STRACE_LOG("syscall return: %s -> %d", name, c->GPRx);
      break;
    case SYS_close:
      STRACE_LOG("syscall: %s(%d:%s)", name, a[1], STRACE_FD(a[1]));
      c->GPRx = fs_close(a[1]);
      STRACE_LOG("syscall return: %s -> %d", name, c->GPRx);
      break;
    case SYS_lseek:
      STRACE_LOG("syscall: %s(%d:%s, %d, %d)", name, a[1], STRACE_FD(a[1]), a[2], a[3]);
      c->GPRx = fs_lseek(a[1], a[2], a[3]);
      STRACE_LOG("syscall return: %s -> %d", name, c->GPRx);
      break;
    case SYS_brk:
      STRACE_LOG("syscall: %s(%p)", name, a[1]);
      c->GPRx = mm_brk(a[1]);
      STRACE_LOG("syscall return: %s -> %d", name, c->GPRx);
      break;
    case SYS_fstat:
      STRACE_LOG("syscall: %s(%d:%s, %p)", name, a[1], STRACE_FD(a[1]), a[2]);
      c->GPRx = fs_fstat(a[1], (struct stat *)a[2]);
      STRACE_LOG("syscall return: %s -> %d", name, c->GPRx);
      break;
    case SYS_gettimeofday: {
      STRACE_LOG("syscall: %s(%p, %p)", name, a[1], a[2]);
      struct timeval *tv = (struct timeval *)a[1];
      struct timezone *tz = (struct timezone *)a[2];
      uint64_t us = io_read(AM_TIMER_UPTIME).us;
      if (tv != NULL) {
        tv->tv_sec = us / 1000000;
        tv->tv_usec = us % 1000000;
      }
      if (tz != NULL) {
        tz->tz_minuteswest = 0;
        tz->tz_dsttime = 0;
      }
      c->GPRx = 0;
      STRACE_LOG("syscall return: %s -> %d", name, c->GPRx);
      break;
    }
    case SYS_exit:
      STRACE_LOG("syscall: %s(%d)", name, a[1]);
      STRACE_LOG("syscall exit status = %d", a[1]);
      halt(a[1]);
      break;
    default:
      STRACE_LOG("syscall: %s(%d, %p, %p, %p)", name, a[0], a[1], a[2], a[3]);
      panic("Unhandled syscall ID = %d", a[0]);
  }
}
