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

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

//只需要在paddr_read()和paddr_write()中进行记录即可. 你可以自行定义mtrace输出的格式.

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
static uint8_t *mrom_pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static uint8_t mrom_pmem[CONFIG_MSIZE] PG_ALIGN = {};
static uint8_t sram_pmem[CONFIG_MSIZE] PG_ALIGN = {};

#endif

//客户机是nemu 主机是我，客户机执行 mov [0x80001000], eax，模拟器会调用 guest_to_host(0x80001000) 找到主机内存位置并写入数据。
/*paddr_t
表示客户机的物理地址（Guest Physical Address），即客户机操作系统认为的“真实”物理地址。

uint8_t*（或 void*）
表示主机的虚拟地址（Host Virtual Address），即宿主程序（如模拟器）实际使用的内存指针。

pmem
主机上分配的一块连续内存，用于模拟客户机的物理内存（即客户机的“物理内存”实际存储在宿主机的这块内存中）。

CONFIG_MBASE
客户机物理地址的起始基址（Guest Physical Memory Base），表示客户机物理地址空间的起始偏移量（例如 0x80000000）。*/
//0x80000000~0x87ffffff 将客户机物理地址转换为主机虚拟地址。
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
//将主机虚拟地址转换回客户机物理地址。
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

//mrom:0x20000000~0x2000_0fff 将客户机物理地址转换为主机虚拟地址。
uint8_t* mrom_guest_to_host(paddr_t paddr) { return mrom_pmem + paddr - CONFIG_MROM_MBASE; }
//将主机虚拟地址转换回客户机物理地址。
paddr_t mrom_host_to_guest(uint8_t *haddr) { return haddr - mrom_pmem + CONFIG_MROM_MBASE; }

//SRAM	0x0f00_0000~0x0fff_ffff 将客户机物理地址转换为主机虚拟地址。
uint8_t* sram_guest_to_host(paddr_t paddr) { return sram_pmem + paddr - CONFIG_SRAM_MBASE; }
//将主机虚拟地址转换回客户机物理地址。
paddr_t sram_host_to_guest(uint8_t *haddr) { return haddr - sram_pmem + CONFIG_SRAM_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static word_t mrom_read(paddr_t addr, int len) {
  word_t ret = host_read(mrom_guest_to_host(addr), len);
  return ret;
}

static word_t sram_read(paddr_t addr, int len) {
  word_t ret = host_read(sram_guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void mrom_write(paddr_t addr, int len, word_t data) {
  host_write(mrom_guest_to_host(addr), len, data);
}

static void sram_write(paddr_t addr, int len, word_t data) {
  host_write(sram_guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

static void mrom_out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, MROM_PMEM_LEFT, MROM_PMEM_RIGHT, cpu.pc);
}

static void sram_out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, SRAM_PMEM_LEFT, SRAM_PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
  mrom_pmem = malloc(CONFIG_MROM_MSIZE);
  assert(pmem);
#endif
  //如果定义了MEM随机化，那就执行memset
  //*memset(void *str, int c, size_t n) 用于将一段内存区域设置为指定的值。
  //memset() 函数将指定的值 c 复制到 str 所指向的内存区域的前 n 个字节中，这可以用于将内存块清零或设置为特定值。
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
  IFDEF(CONFIG_MEM_RANDOM, memset(mrom_pmem, rand(), CONFIG_MROM_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", MROM_PMEM_LEFT, MROM_PMEM_RIGHT);
}

//读物理地址
word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) {  
    IFDEF(CONFIG_MTRACE, Log("read in address = " FMT_PADDR ", len = %d\n", addr, len));
    return pmem_read(addr, len);
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

//读mrom地址
word_t mromaddr_read(paddr_t addr, int len) {
  if (likely(in_mrom(addr))) {  
    IFDEF(CONFIG_MTRACE, Log("read in address = " FMT_PADDR ", len = %d\n", addr, len));
    return mrom_read(addr, len);
  }
  // IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  mrom_out_of_bound(addr);
  return 0;
}

//读sram地址
word_t sramaddr_read(paddr_t addr, int len) {
  if (likely(in_sram(addr))) {  
    IFDEF(CONFIG_MTRACE, Log("read in address = " FMT_PADDR ", len = %d\n", addr, len));
    return sram_read(addr, len);
  }
  // IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  sram_out_of_bound(addr);
  return 0;
}

//写物理地址
void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { 
    pmem_write(addr, len, data);
    IFDEF(CONFIG_MTRACE, Log("write in address = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data));
    return; }
  
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
  //Log("weiwei");
}

//写mrom地址 其实mrom不应该写 后面改掉todo
void mromaddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_mrom(addr))) { 
    mrom_write(addr, len, data);
    IFDEF(CONFIG_MTRACE, Log("write in address = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data));
    return; }
  mrom_out_of_bound(addr);
  //Log("weiwei");
}

//写mrom地址
void sramaddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_sram(addr))) { 
    sram_write(addr, len, data);
    IFDEF(CONFIG_MTRACE, Log("write in address = " FMT_PADDR ", len = %d, data = " FMT_WORD "\n", addr, len, data));
    return; }
  sram_out_of_bound(addr);
  //Log("weiwei");
}
