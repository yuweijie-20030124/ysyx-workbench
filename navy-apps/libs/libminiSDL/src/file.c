#include <sdl-file.h>
#include <stdlib.h>
#include <string.h>

static int64_t file_size(struct SDL_RWops *f) {
  long cur = ftell(f->fp);
  fseek(f->fp, 0, SEEK_END);
  long size = ftell(f->fp);
  fseek(f->fp, cur, SEEK_SET);
  return size;
}

static int64_t file_seek(struct SDL_RWops *f, int64_t offset, int whence) {
  if (fseek(f->fp, offset, whence) != 0) {
    return -1;
  }
  return ftell(f->fp);
}

static size_t file_read(struct SDL_RWops *f, void *buf, size_t size, size_t nmemb) {
  return fread(buf, size, nmemb, f->fp);
}

static size_t file_write(struct SDL_RWops *f, const void *buf, size_t size, size_t nmemb) {
  return fwrite(buf, size, nmemb, f->fp);
}

static int file_close(struct SDL_RWops *f) {
  int ret = fclose(f->fp);
  free(f);
  return ret;
}

static int64_t mem_size(struct SDL_RWops *f) {
  return f->mem.size;
}

static int64_t mem_seek(struct SDL_RWops *f, int64_t offset, int whence) {
  (void)f;
  (void)offset;
  (void)whence;
  return -1;
}

static size_t mem_read(struct SDL_RWops *f, void *buf, size_t size, size_t nmemb) {
  size_t len = size * nmemb;
  if (len > (size_t)f->mem.size) {
    len = f->mem.size;
  }
  memcpy(buf, f->mem.base, len);
  return size == 0 ? 0 : len / size;
}

static size_t mem_write(struct SDL_RWops *f, const void *buf, size_t size, size_t nmemb) {
  size_t len = size * nmemb;
  if (len > (size_t)f->mem.size) {
    len = f->mem.size;
  }
  memcpy(f->mem.base, buf, len);
  return size == 0 ? 0 : len / size;
}

static int mem_close(struct SDL_RWops *f) {
  free(f);
  return 0;
}

SDL_RWops* SDL_RWFromFile(const char *filename, const char *mode) {
  FILE *fp = fopen(filename, mode);
  if (fp == NULL) {
    return NULL;
  }
  SDL_RWops *rw = malloc(sizeof(SDL_RWops));
  if (rw == NULL) {
    fclose(fp);
    return NULL;
  }
  rw->size = file_size;
  rw->seek = file_seek;
  rw->read = file_read;
  rw->write = file_write;
  rw->close = file_close;
  rw->type = RW_TYPE_FILE;
  rw->fp = fp;
  rw->mem.base = NULL;
  rw->mem.size = 0;
  return rw;
}

SDL_RWops* SDL_RWFromMem(void *mem, int size) {
  SDL_RWops *rw = malloc(sizeof(SDL_RWops));
  if (rw == NULL) {
    return NULL;
  }
  rw->size = mem_size;
  rw->seek = mem_seek;
  rw->read = mem_read;
  rw->write = mem_write;
  rw->close = mem_close;
  rw->type = RW_TYPE_MEM;
  rw->fp = NULL;
  rw->mem.base = mem;
  rw->mem.size = size;
  return rw;
}
