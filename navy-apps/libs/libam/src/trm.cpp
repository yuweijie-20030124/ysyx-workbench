#include <am.h>
#include <stdlib.h>
#include <unistd.h>

Area heap;

void putch(char ch) {
  if (write(1, &ch, 1) < 0) {
    // AM putch has no error reporting path.
  }
}

void halt(int code) {
  exit(code);
  while (1) {
  }
}
