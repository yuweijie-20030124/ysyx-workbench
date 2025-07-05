#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  //panic("Not implemented");
  int num = 0;
  while(*s++ != '\0') {num ++;}
  return num;
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  char *p = NULL;
  if(src == NULL || dst == NULL){
    return NULL;
  }
  p = dst;
  while(*src != '\0'){
    *dst = *src;
    dst++;
    src++;
  }
  return p;
}

char *strncpy(char *dst, const char *src, size_t n) {
  //panic("Not implemented");
  char *p = NULL;
  if(src == NULL || dst == NULL){
    return NULL;
  }
  p = dst;
  while(*src != '\0'&& n-- != 0){
    *dst = *src;
    dst++;
    src++;
  }
  return p;
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  if(src == NULL || dst == NULL){
    return NULL;
  }
  char * temp = dst;
  while (*dst) dst++;
  while (*src) *dst++ = *src++;
  return temp;
}

int strcmp(const char *s1, const char *s2) {
  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
