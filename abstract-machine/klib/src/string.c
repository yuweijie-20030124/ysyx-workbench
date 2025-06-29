#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {//数一数括号里面的常熟到底有多少个字符
  //panic("Not implemented");
  size_t len = 0;
  while (*s++ != '\0') {
    len++;
  }
  return len;
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  char *original_dst = dst;
  while ((*dst++ = *src++) != '\0');
  return original_dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  //panic("Not implemented");
  char *original_dst = dst;
  while (n-- && (*dst++ = *src++) != '\0');
  while (n-- > 0) {
    *dst++ = '\0';
} 
  return original_dst;
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  char *original_dst = dst;
  while (*dst) {
    dst++;//统计dst有多少个字符
  }
  while ((*dst++ = *src++) != '\0');//复制src的字符再dst后面
  return original_dst;
}



int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  return *(unsigned char *)s1 - *(unsigned char *)s2; //返回两个字符串的差值
}

int strncmp(const char *s1, const char *s2, size_t n) {
  //panic("Not implemented");
  while (n-- && *s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  if (n == (size_t)-1) return 0; //如果n为-1，表示没有限制长度
  return *(unsigned char *)s1 - *(unsigned char *)s2; //返回两个字符串的差值
}

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
  unsigned char *p = s;
  while (n--) {
    *p++ = (unsigned char)c; //将c的值赋给s指针指向的内存
  }
  return s; //返回s的地址
}

void *memmove(void *dst, const void *src, size_t n) { 
  //panic("Not implemented");
  unsigned char *d = dst;
  const unsigned char *s = src;
  if (d < s || d >= s + n) {

    while (n--) {
      *d++ = *s++;
    }
  } else {

    d += n;
    s += n;
    while (n--) {
      *(--d) = *(--s);
    }
  }
  return dst; 
}

void *memcpy(void *out, const void *in, size_t n) {
  //panic("Not implemented");
  unsigned char *d = out;
  const unsigned char *s = in;
  while (n--) {
    *d++ = *s++;  //将in指向的内存复制到out指向的内存
  }
  return out; //返回out的地址
}

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
  const unsigned char *p1 = s1;
  const unsigned char *p2 = s2;
  while (n--) {
    if (*p1 != *p2) {
      return *p1 - *p2; //返回两个内存块的差值
    }
    p1++;
    p2++;
  }
  return 0; //如果相等，返回0
}

#endif
