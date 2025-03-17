/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
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
 
 // this should be enough
 static char buf[65536] = {};//存储生成的数学表达式
 static char code_buf[65536 + 128] = {}; // 存储要编译运行的c程序代码
 static char *code_format =
 "#include <stdio.h>\n"
 "int main() { "
 "  unsigned result = %s; "
 "  printf(\"%%u\", result); "
 "  return 0; "
 "}";
 //代码模板
 int index_buf  = 0;//索引变量：用于跟踪buf数组中的当前位置
 
 int choose(int n){//随机选择函数
     int flag = rand() % 3 ; // 0 1 2
   printf("index = %d, flag = %d. \n",index_buf, flag);
     return flag;
 }
 void gen_num(){//生成数字
     int num = rand()% 100;
     int num_size = 0, num_tmp = num;
     while(num_tmp){
   num_tmp /= 10;
   num_size ++;
     }
     int x = 1;
     while(num_size)
     {
   x *= 10;
   num_size -- ;
     }
     x /= 10;
     while(num)
     {
   char c = num / x + '0';
   num %= x;
   x /= 10;
   buf[index_buf ++] = c;
     }
 }
 void gen(char c){//添加字符
     buf[index_buf ++] = c;
 }
 void gen_rand_op(){//生成随机操作符
     char op[4] = {'+', '-', '*', '/'};
     int op_position = rand() % 4;
     buf[index_buf ++] = op[op_position];
 }
 
 
 static void gen_rand_expr() {//生成随机表达式
     //    buf[0] = '\0';	
    if(index_buf > 65530)//字符太长
          printf("overSize\n");
     switch (choose(3)) {
   case 0:
       gen_num();//生成随机数字
       break;
   case 1:
       gen('(');//左括号
       gen_rand_expr();//递归生成表达式
       gen(')');//右括号
       break;
   default:
       gen_rand_expr();//左侧表达式
       gen_rand_op();//运算符
       gen_rand_expr();//右侧表达式
       break;
     }
 }
 
 //生成表达式计算他们的值
 int main(int argc, char *argv[]) {
     int seed = time(0);
     srand(seed);
     int loop = 2;
     if (argc > 1) {
   sscanf(argv[1], "%d", &loop);
     }
     int i;
     for (i = 0; i < loop; i ++) {
   gen_rand_expr();//随机表达式
   buf[index_buf] = '\0';//确保字符串以NULL终止
   sprintf(code_buf, code_format, buf);//格式化完整的c代码字符串
   //创建临时文件写入代码
   FILE *fp = fopen("/tmp/.code.c", "w");
   assert(fp != NULL);
   fputs(code_buf, fp);//将完整的c代码写入文件
   fclose(fp);
   //编译生成的c代码
   int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
   if (ret != 0) continue;//编译失败就跳过
   //运行编译后的程序并读取结果
   fp = popen("/tmp/.expr", "r");
   assert(fp != NULL);
 
   int result;
   ret = fscanf(fp, "%d", &result);//读取计算结果
   pclose(fp);//关闭进程
 
   printf("the result is %u , the buf is %s\n", result, buf);//打印结果和表达式

   index_buf = 0; //重置buf索引以便下次生成
     }
     return 0;
 }
 