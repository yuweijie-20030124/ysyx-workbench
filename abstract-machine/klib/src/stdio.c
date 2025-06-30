#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}


int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  
  int val = vsnprintf(out, 1024, fmt, ap);
  va_end(ap);

  return val;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
    char *start = out;//记录输出字符串起始位置，用于最后计算长度
    while (n-- && *fmt != '\0') { //遍历字符串fmt，保证不超过最大长度n
        if (*fmt == '%') { //如果遇到%符号，判断后面的字符
            fmt++;
            if (*fmt == 's') {//后面字符如果是s的话，取下一个参数为字符串，逐字符复制到 out。
                //用于在实现像 printf 这样带省略号参数（...）的函数时，依次获取每个参数的值。
                //从参数列表 ap 中取出下一个参数，并把它当作 char* 类型返回
                char *tmp_s = va_arg(ap, char*);
                while (*tmp_s != '\0') {
                    *out++ = *tmp_s++;//逐字符赋值字符串
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
