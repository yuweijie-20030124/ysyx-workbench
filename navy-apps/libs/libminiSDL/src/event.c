#include <NDL.h>
#include <SDL.h>
#include <stdio.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

static uint8_t keystate[sizeof(keyname) / sizeof(keyname[0])] = {};

static int parse_key(const char *name) {
  for (int i = 0; i < (int)(sizeof(keyname) / sizeof(keyname[0])); i++) {
    if (strcmp(name, keyname[i]) == 0) return i;
  }
  return SDLK_NONE;
}

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64] = {};
  if (!NDL_PollEvent(buf, sizeof(buf))) return 0;

  char type[3] = {};
  char name[32] = {};
  if (sscanf(buf, "%2s %31s", type, name) != 2) return 0;

  int key = parse_key(name);
  ev->type = (strcmp(type, "kd") == 0) ? SDL_KEYDOWN : SDL_KEYUP;
  ev->key.keysym.sym = key;
  if (key != SDLK_NONE) {
    keystate[key] = (ev->type == SDL_KEYDOWN);
  }
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  while (!SDL_PollEvent(event)) {
  }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  if (numkeys) *numkeys = sizeof(keystate) / sizeof(keystate[0]);
  return keystate;
}
