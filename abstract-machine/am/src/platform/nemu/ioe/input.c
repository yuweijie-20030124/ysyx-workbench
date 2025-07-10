#include <am.h>
#include <nemu.h>
#include </home/yuweijie/ysyx-workbench/abstract-machine/klib/include/klib.h>
#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t k = inl(KBD_ADDR);
  printf("Scancode: 0x%04x, %s\n", k, kbd->keydown ? "DOWN" : "UP");
  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  kbd->keycode = k & ~KEYDOWN_MASK;
}
