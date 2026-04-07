#include <NDL.h>

void __SDL_InitTicks(void);

int SDL_Init(uint32_t flags) {
  int ret = NDL_Init(flags);
  __SDL_InitTicks();
  return ret;
}

void SDL_Quit() {
  NDL_Quit();
}

char *SDL_GetError() {
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
  return -1;
}

int SDL_ShowCursor(int toggle) {
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
}
