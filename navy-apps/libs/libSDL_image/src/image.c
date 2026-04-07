#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  SDL_Surface *ret = STBIMG_LoadFromMemory((const unsigned char *)src->mem.base, src->mem.size);
  if (freesrc) {
    SDL_RWclose(src);
  }
  return ret;
}

SDL_Surface* IMG_Load(const char *filename) {
  FILE *fp = fopen(filename, "rb");
  if (fp == NULL) {
    return NULL;
  }

  assert(fseek(fp, 0, SEEK_END) == 0);
  long size = ftell(fp);
  assert(size >= 0);
  assert(fseek(fp, 0, SEEK_SET) == 0);

  unsigned char *buf = malloc((size_t)size);
  assert(buf != NULL);
  size_t nread = fread(buf, 1, size, fp);
  fclose(fp);
  assert(nread == (size_t)size);

  SDL_Surface *ret = STBIMG_LoadFromMemory(buf, size);
  free(buf);
  return ret;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
