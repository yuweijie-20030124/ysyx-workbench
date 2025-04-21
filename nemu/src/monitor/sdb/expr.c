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
#include <memory/vaddr.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
//token类型枚举
int tokens_num=0;
enum {
  TK_NOTYPE = 256, TK_EQ , TK_NEQ ,
  TK_ADD , TK_SUB , TK_DIV , TK_MUL , TK_LPAR , TK_RPAR ,
  TK_DEC , TK_HEX , TK_REG , TK_VAR ,
  TK_AND , TK_OR  , TK_DEF , TK_NEG ,
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},           // spaces rules[0]
  {"\\=\\=", TK_EQ},              // equal rules[1]
  {"\\!\\=", TK_NEQ},            // not equal rules[2]
  {"\\+", TK_ADD},          // plus rules[3]
  {"\\-",  TK_SUB},           // sub rules[4]
  {"\\/", TK_DIV},          // divide rules[5]
  {"\\*",  TK_MUL},       // multiple rules[6]
  {"\\(", TK_LPAR},     // left parenthesis rules[7]
  {"\\)", TK_RPAR},    // right parenthesis rules[8]
  {"[0-9]+", TK_DEC}, // decimal number rules[9]
  {"0[xX][0-9a-fA-F]+", TK_HEX},    // hex number rules[10]
  {"\\$(\\$0|ra|sp|gp|tp|t0|t1|t2|s0|s1|a0|a1|a2|a3|a4|a5|a6|a7|s2|s3|s4|s5|s6|s7|s8|s9|s10|s11|t3|t4|t5|t6)", TK_REG}, // register rules[11]
  {"[a-zA-Z0-9_]+", TK_VAR},       // variable rules[12]
  {"\\&\\&", TK_AND},       // AND rules[13]
  {"\\|\\|", TK_OR},       // OR rules[14]


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
  char str[128];
} Token;

#define MAX_TOKEN_NUM 1024
static Token tokens[MAX_TOKEN_NUM] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

bool check_parentheses(uint16_t p, uint16_t q) {
  if(tokens[p].type!='('||tokens[q].type!=')') {return false;}
  if(tokens[p].type == '(' && tokens[q].type == ')')
  {
    int16_t cnt = 0;
    uint16_t i;
    for (i = p + 1; cnt > 0 && i < q; i++)
    {
        if (tokens[i].type == '(') cnt += 1;
        else if (tokens[i].type == ')') cnt -= 1;
    }
    if(cnt == 0 && i == q) return true;
    else return false;
  }
  else 
    return false;
}

int order(int token) {//排列token的顺序优先级
switch(token){
  case TK_OR:
    return 7;
  case TK_AND:
    return 6;
  case TK_EQ:
  case TK_NEQ:
    return 5;
  case TK_ADD:
  case TK_SUB:
    return 4;
  case TK_MUL:
  case TK_DIV:
    return 3;
  default:
    return 0;
  }
return 0;
}

static bool make_token(char *e) {//将输入字符串分解为token数组
  int position = 0;
  int i;
  regmatch_t pmatch;
  memset(tokens, 0, sizeof(tokens)); 
  nr_token = 0;

  while (e[position] != '\0' && nr_token < MAX_TOKEN_NUM) {
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
          case TK_NOTYPE://空格则不需要存入
              break;
          case TK_SUB:
          tokens[nr_token++].type=TK_SUB;
              break;
          case TK_MUL:
          tokens[nr_token++].type=TK_MUL;
              break;
          case TK_ADD:
          tokens[nr_token++].type=TK_ADD;
              break;
          case TK_DIV:
          tokens[nr_token++].type=TK_DIV;
              break;
          case TK_LPAR:
          tokens[nr_token++].type=TK_LPAR;
              break;
          case TK_RPAR:
          tokens[nr_token++].type=TK_RPAR;
              break;
          case TK_NEQ:
          tokens[nr_token++].type=TK_NEQ;
              break;
          case TK_EQ:
          tokens[nr_token++].type=TK_EQ;
              break;
          case TK_AND:
          tokens[nr_token++].type=TK_AND;
              break;              
          case TK_OR:
          tokens[nr_token++].type=TK_OR;
              break;  
          case TK_REG:
          tokens[nr_token].type=TK_REG;
          strncpy(tokens[nr_token++].str,&e[position-substr_len],substr_len);
               break;
          case TK_DEC:
          tokens[nr_token].type=TK_DEC;
          strncpy(tokens[nr_token++].str,&e[position-substr_len],substr_len);
               break;
          case TK_HEX:
          tokens[nr_token].type=TK_HEX;
          strncpy(tokens[nr_token++].str,&e[position-substr_len],substr_len);
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
  tokens_num=nr_token;
  return true;
}

word_t eval(int p, int q) {
  if (p > q) {
    assert(0);
    return -1;
  }
  else if (p == q) {
    return strtoul(tokens[p].str, NULL, 0);
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    //op = the position of 主运算符 in the token expression;
    int op=0;
    int od=-1;
    int i;
    int val1=1;
    int bracketCount=0;
    for(i=p;i<=q;i++){
      if (tokens[i].type=='(') {
          bracketCount++;
          continue;
      } else if (tokens[i].type==')') {
          bracketCount--;
          if (bracketCount>0) {
              continue; // 如果还有未匹配的括号，则继续跳过
          }
      }
      if (bracketCount>0) {
          continue; // 在括号内部，跳过处理
      }
      if(tokens[i].type==TK_DEC||tokens[i].type==TK_NOTYPE||tokens[i].type==TK_HEX||tokens[i].type==TK_REG){
        continue;
      }else if(order(tokens[i].type)>=od){ //pr是当前最高优先级
        od=order(tokens[i].type);
        op=i;
      }
    }
    if(tokens[op].type!=TK_NEG&&tokens[op].type!=TK_DEF){
      val1 = eval(p, op - 1);
    }
    word_t val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case TK_ADD: return val1 + val2;
      case TK_SUB: return val1 - val2;
      case TK_MUL: return val1 * val2;
      case TK_DIV:
        if(val2==0){
          printf("you cant divide zero\n");
          assert(0);
        }
        else return val1 / val2;
      case TK_NEG: return val2=-val2;
      case TK_EQ:
        if(val1==val2) return 1;
        else return 0;
      case TK_NEQ:
        if(val1!=val2) return 1;
        else return 0;
      case TK_AND: return val1&&val2;
      case TK_OR : return val1||val2;
      case TK_DEF: return vaddr_read(val2,4);
      default: assert(0);
    }
  }
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  int i;
  for (i=0;i<tokens_num;i++) {
    if (tokens[i].type == TK_SUB && ( i == 0 || (tokens[i - 1].type!=')'&&tokens[i - 1].type != TK_DEC&&tokens[i-1].type!=TK_HEX&&tokens[i-1].type!=TK_REG)) ) {
      tokens[i].type = TK_NEG;
    }
    if (tokens[i].type == TK_MUL && ( i == 0 || (tokens[i - 1].type!=')'&&tokens[i - 1].type != TK_DEC&&tokens[i-1].type!=TK_HEX&&tokens[i-1].type!=TK_REG)) ) {
      tokens[i].type = TK_DEF;
    }
    if (tokens[i].type == TK_REG){
        bool flag=true; 
        word_t reg_v=isa_reg_str2val(tokens[i].str,&flag);
        if(flag==false) assert(0);
        sprintf(tokens[i].str,"%u",reg_v);//用于将格式化的数据写入字符串中(str类型转化为u类型)
    }
  }
  return eval(0,tokens_num-1);
  /* TODO: Insert codes to evaluate the expression. */


  return 0;
}
