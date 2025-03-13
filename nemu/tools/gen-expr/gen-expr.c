/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>
#include <stdbool.h>
#include <errno.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
static uint16_t ptr = 0;

static void gen(char c) {
  buf[ptr] = c;
  ptr += 1;
  if (rand() % 2 == 1) {
    buf[ptr] = ' ';
    ptr += 1;
  }// random space
}

static void gen_rand_op() {
  int choose4 = rand() % 4;//%4
  switch (choose4) {
    case 0: gen('+'); break;
    case 1: gen('-'); break;
    case 2: gen('*'); break;
    case 3: gen('/'); break;
    default: printf("ERROE: gen_rand_op! \n"); break;
  }
}

static void gen_num() {
  uint32_t randnum = rand() & (uint8_t)(-1);// % uint32
  sprintf(buf + ptr, "%u", randnum);
  ptr += strlen(buf + ptr);
  if (rand() & 1) {
    buf[ptr] = ' ';
    ptr += 1;
  }// random space
}

static void gen_rand_expr(bool noMoreBrackets, uint8_t depth) {
  int choose3;
  if (noMoreBrackets)// Avoid multiple Brackets (( ... ))
  {
    if (depth == 12)// Avoid buf overflow
    {
      choose3 = 0;
    }
    else
    {
      choose3 = rand() % 2;//0, 1
    }
  }
  else
  {
    if (depth == 12)// Avoid buf overflow
    {
      choose3 = rand() % 2 == 0 ? 0 : 2;//0, 2
    }
    else
    {
      choose3 = rand() % 3;// 0, 1, 2
    }
  }
  
  switch (choose3) {
    case 0: gen_num(); break;
    case 1: gen_rand_expr(false, depth + 1); gen_rand_op(); gen_rand_expr(false, depth + 1); break;
    default: gen('('); gen_rand_expr(true, depth); gen(')'); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
