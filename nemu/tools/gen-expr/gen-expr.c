#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#define BUF_SIZE 65536
#define MAX_EXPR_LEN 30
#define MAX_ATTEMPTS 100

static char buf[BUF_SIZE];
static char code_buf[BUF_SIZE + 128];
static const char *code_format =
    "#include <stdio.h>\n"
    "int main() { "
    "  unsigned result = %s; "
    "  printf(\"%%u\", result); "
    "  return 0; "
    "}";

static char *buf_ptr;
static const char *buf_end = buf + BUF_SIZE - 1;

static int choose(int n) {
    return rand() % n;
}

static bool buf_append_char(char c) {
    if (buf_ptr >= buf_end) return false;
    *buf_ptr++ = c;
    return true;
}

static bool buf_append_str(const char *str) {
    size_t len = strlen(str);
    if (buf_ptr + len >= buf_end) return false;
    strcpy(buf_ptr, str);
    buf_ptr += len;
    return true;
}

static void gen_space() {
    static const char spaces[] = "    ";
    int n = choose(sizeof(spaces)-1);
    if (buf_ptr + n >= buf_end) return;
    strncpy(buf_ptr, spaces, n);
    buf_ptr += n;
}

static void gen_num() {
    int num = choose(INT8_MAX-1) + 1; // 1-127
    char num_str[16];
    snprintf(num_str, sizeof(num_str), "%d", num);
    if (!buf_append_str(num_str)) return;
    gen_space();
}

static const char ops[] = {'+', '-', '*', '/'};
static void gen_rand_op() {
    char op = ops[choose(sizeof(ops))];
    if (!buf_append_char(op)) return;
    gen_space();
}

static bool gen_rand_expr(int depth) {
    if (depth > 8) { // 更严格的递归限制
        gen_num();
        return true;
    }

    if (buf_ptr >= buf_end - MAX_EXPR_LEN) return false;

    switch (choose(3)) {
        case 0: // 数字
            gen_num();
            break;
        case 1: // 括号表达式
            if (!buf_append_char('(')) return false;
            gen_space();
            if (!gen_rand_expr(depth + 1)) return false;
            gen_space();
            if (!buf_append_char(')')) return false;
            gen_space();
            break;
        default: // 二元运算
            if (!gen_rand_expr(depth + 1)) return false;
            gen_rand_op();
            if (!gen_rand_expr(depth + 1)) return false;
            break;
    }
    return true;
}

static void cleanup() {
    remove("/tmp/.code.c");
    remove("/tmp/.expr");
}

static bool is_valid_expr() {
    // 检查除零和空括号
    if (strstr(buf, "/0")) return false;
    if (strstr(buf, "()")) return false;
    
    // 检查开头和结尾的操作符
    char first = buf[0], last = buf[strlen(buf)-1];
    if (strchr("+-*/", first) || strchr("+-*/(", last)) return false;
    
    return true;
}

int main(int argc, char *argv[]) {
    atexit(cleanup);
    
    // 更好的随机种子
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((unsigned)(ts.tv_nsec ^ (getpid() << 16)));
    
    int loop = 1;
    if (argc > 1) {
        loop = atoi(argv[1]);
        if (loop <= 0) loop = 1;
    }
    
    for (int i = 0; i < loop; ) {
        // 重置缓冲区
        buf_ptr = buf;
        *buf_ptr = '\0';
        
        // 生成表达式
        int attempts = 0;
        bool expr_valid = false;
        
        while (attempts++ < MAX_ATTEMPTS) {
            buf_ptr = buf;
            if (!gen_rand_expr(0)) continue;
            *buf_ptr = '\0';
            
            size_t len = strlen(buf);
            if (len < 5 || len > MAX_EXPR_LEN) continue;
            if (!is_valid_expr()) continue;
            
            expr_valid = true;
            break;
        }
        
        if (!expr_valid) continue;
        
        // 准备编译代码
        snprintf(code_buf, sizeof(code_buf), code_format, buf);
        
        // 写入临时文件
        FILE *fp = fopen("/tmp/.code.c", "w");
        if (!fp) continue;
        fputs(code_buf, fp);
        fclose(fp);
        
        // 编译
        if (system("gcc /tmp/.code.c -Wall -Werror -o /tmp/.expr 2>/dev/null") != 0) {
            continue;
        }
        
        // 执行
        fp = popen("/tmp/.expr", "r");
        if (!fp) continue;
        
        unsigned result;
        if (fscanf(fp, "%u", &result) != 1) {
            pclose(fp);
            continue;
        }
        pclose(fp);
        
        // 输出结果
        printf("%u %s\n", result, buf);
        fflush(stdout); // 确保及时输出
        
        i++; // 只有成功生成才计数
    }
    
    return 0;
}