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

#include <isa.h>
#include <memory/paddr.h>

//取指 == 读地址
word_t vaddr_ifetch(vaddr_t addr, int len) {
  if(addr >= 0x80000000 && addr <= 0x87FFFFFF){ //物理地址
    return paddr_read(addr, len);
  }
  else if(addr >= 0x20000000 && addr <= 0x20000FFF){
    return mromaddr_read(addr,len);
  }
  else {
    printf("no mrom no p\n");
    return 0;
  }
}

//读地址 == 取指
word_t vaddr_read(vaddr_t addr, int len) {
  if(addr >= 0x80000000 && addr <= 0x87FFFFFF){ //物理地址
    return paddr_read(addr, len);
  }
  else if(addr >= 0x20000000 && addr <= 0x20000FFF){
    return mromaddr_read(addr,len);
  }
  else {
    printf("no mrom no p\n");
    return 0;
  }
}
//写地址
void vaddr_write(vaddr_t addr, int len, word_t data) {
  // paddr_write(addr, len, data);
    if(addr >= 0x80000000 && addr <= 0x87FFFFFF){ //物理地址
    paddr_write(addr, len, data);
  }
  else if(addr >= 0x20000000 && addr <= 0x20000FFF){
    mromaddr_write(addr, len, data);
  }
  else {
    printf("no mrom no p,out of bound\n");
  }
}
