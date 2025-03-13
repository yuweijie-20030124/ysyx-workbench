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

//1.识别出表达式的单元
//2.

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
//token类型枚举
enum {
  TK_NOTYPE = 256, TK_EQ , TK_NEQ ,
  TK_ADD , TK_SUB , TK_DIV , TK_MUL , TK_LPAR , TK_RPAR ,
  TK_DEC , TK_HEX , TK_REG , TK_VAR 
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},           // spaces rules[0]
  {"==", TK_EQ},              // equal rules[1]
  {"!=", TK_NEQ},            // not equal rules[2]
  {"\\+", TK_ADD},          // plus rules[3]
  {"-",  TK_SUB},           // sub rules[4]
  {"\\/", TK_DIV},          // divide rules[5]
  {"\\*",  TK_MUL},       // multiple rules[6]
  {"\\(", TK_LPAR},     // left parenthesis rules[7]
  {"\\)", TK_RPAR},    // right parenthesis rules[8]
  {"[0-9]+", TK_DEC}, // decimal number rules[9]
  {"0[xX][0-9a-fA-F]+", TK_HEX},    // hex number rules[10]
  {"\\$(\\$0|ra|sp|gp|tp|t0|t1|t2|s0|s1|a0|a1|a2|a3|a4|a5|a6|a7|s2|s3|s4|s5|s6|s7|s8|s9|s10|s11|t3|t4|t5|t6)", TK_REG}, // register rules[11]
  {"[a-zA-Z0-9_]+", TK_VAR},       // variable rules[12]
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[256];
} Token;
#define MAX_TOKEN_NUM 256
static Token tokens[MAX_TOKEN_NUM] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {//将输入字符串分解为token数组
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE:
              printf("i get a space\n"); //空格则不需要存入
              break;
          case TK_ADD:
          case TK_SUB:
          case TK_EQ:
          case TK_MUL:
          case TK_DIV:
          case TK_LPAR:
          case TK_RPAR:
          case TK_NEQ:

          break;

          case TK_REG:
          case TK_DEC:
          case TK_HEX:
          case TK_VAR:

          break; 
          default: printf("you print unrecognized token\n");
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  if (e[position] != '\0' && nr_token >= MAX_TOKEN_NUM){
    printf("Expression too long!\n");
    return false;
  }
  return true;
}

bool check_parentheses(uint16_t p, uint16_t q) {
  if(tokens[p].type == '(' && tokens[q].type == ')')
  {
    int16_t cnt = 1;
    uint16_t i;
    for (i = p + 1; cnt > 0 && i < q; i++)
    {
        if (tokens[i].type == '(') cnt += 1;
        else if (tokens[i].type == ')') cnt -= 1;
    }
    if(cnt == 1 && i == q) return true;
    else return false;
  }
  else 
    return false;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */


  return 0;
}
