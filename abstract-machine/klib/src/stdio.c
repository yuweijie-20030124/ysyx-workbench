#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char buf[1024];
void putch(char ch);



int printf(const char *fmt, ...) {
  panic("Not implemented");
}


int vsprintf(char *out, const char *fmt, va_list ap) {
      panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list arg;
  va_start(arg, fmt);

  int res = vsprintf(out ,fmt, arg);    // 将格式化的内容(字符串)赋值给out

  va_end(arg);
  return res;
}


//out是指向数组的指针，输出字符串将字符存储在该指针指向的数组中。数组必须足够大，能够容纳输出字符串。
//n  指定写入字符串的最大数量，最大数量为为(n-1),不包括末尾空字符。
//fmt格式字符串，指定了后续参数如何被格式化为字符串。这个字符串遵循与 printf 相同的格式说明符。%s %d啥的
//ap 包含了要格式化的可变数量的参数。这个列表是通过 va_start 宏初始化的，可以通过 va_arg 宏来访问其中的参数。
int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
    char *start = out;
    while (n-- && *fmt != '\0') {
        if (*fmt == '%') {
            fmt++;
            if (*fmt == 's') {
                char *tmp_s = va_arg(ap, char*);
                while (*tmp_s != '\0') {
                    *out++ = *tmp_s++;
                }
            }
            else if (*fmt == 'd') {
                int tmp_int = va_arg(ap, int);
                if (tmp_int < 0) {
                    *out++ = '-';
                    tmp_int = -1 * tmp_int;
                }
                int number = tmp_int;
                int len  = 0;
                do {
                    number /= 10;
                    len++;
                } while (number);
                out = out + len - 1;
                int tmp_len = len;
                while (tmp_len--) {
                    int tmp = tmp_int % 10;
                    *out-- = tmp + 48;
                    tmp_int /= 10;
                }
                out += (len+1);
            }
            else if (*fmt == '%') {
                *out++ = '%';
            }
            else if (*fmt == 'c') {
                char tmp_char = va_arg(ap, int);
                *out++ = tmp_char;
            }
            else {
                return -1;
            }
        }
        else {
            *out++ = *fmt;
        }
        fmt++;
    }
    *out = '\0';
    return out - start;
}

#endif
