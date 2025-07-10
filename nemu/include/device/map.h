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

#ifndef __DEVICE_MAP_H__
#define __DEVICE_MAP_H__

#include <cpu/difftest.h>

typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);

/*在硬件交互中，某些寄存器的读取可能具有副作用（side effects），例如：
状态寄存器：读取后可能自动清除某些标志位（如中断状态寄存器）。
FIFO 缓冲区：读取数据后，硬件可能自动更新内部指针。
计数器/定时器：读取计数值可能影响其行为。
callback 允许在 map_read 执行真正的数据读取之前，先通知设备（或模拟器）：“有一个读取操作发生了，请做好相应处理”。*/

typedef struct {
  const char *name;   //设备名称，调试用
  // we treat ioaddr_t as paddr_t here
  paddr_t low;    //映射区的起始地址
  paddr_t high;   //映射区域的结束地址
  void *space;    //实际存储数据的指针
  io_callback_t callback;   //回调函数
} IOMap;
//包括名字映射的起始地址和结束地址，映射的目标空间和一个回调函数。
//low地址范围的下界--起始地址  high地址范围的上界--结束地址

//bool类型确认给定的物理地址是否位于IO的映射区域内
static inline bool map_inside(IOMap *map, paddr_t addr) {
  return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, paddr_t addr) {
  int i;
  for (i = 0; i < size; i ++) {//遍历一遍要找的addr中的size空间
    if (map_inside(maps + i, addr)) {//确认看的是IO的映射区域
      difftest_skip_ref();
      return i;
    }
  }
  return -1;
}

void add_pio_map(const char *name, ioaddr_t addr,
        void *space, uint32_t len, io_callback_t callback);
void add_mmio_map(const char *name, paddr_t addr,
        void *space, uint32_t len, io_callback_t callback);

word_t map_read(paddr_t addr, int len, IOMap *map);
void map_write(paddr_t addr, int len, word_t data, IOMap *map);

#endif
