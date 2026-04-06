#include <NDL.h>
#include <stdio.h>

int main() {
  NDL_Init(0);
  uint32_t start = NDL_GetTicks();

  int count = 1;
  while (count <= 5) {
    uint32_t now = NDL_GetTicks();
    if (now - start >= (uint32_t)(count * 500)) {
      printf("0.5s timer tick %d\n", count);
      count++;
    }
  }

  NDL_Quit();
  return 0;
}
