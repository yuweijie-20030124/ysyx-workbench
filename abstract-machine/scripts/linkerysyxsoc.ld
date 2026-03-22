ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS in npc.mk*/
  /* . = _pmem_start + _entry_offset; 暂时先全部塞到mrom_start0x20000000*/
  . = _mrom_start;
  /* .text 代码段 存放机器码的地方 */
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;
  /* .rodata 只读数据段 存放只读数据*/
  .rodata : {
    *(.rodata*)
  }
  /* 
  .data 数据段 存放已初始化的刻度写的全局变量和静态变量 
  bootloader要把把这个数据段放到sram中
  */
  .data : {
    *(.data*)
  } : data
  edata = .;
  _data = .;
  /* .bss存放未初始化的全局变量和静态变量 */
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }

  /* memory_pmem_start 放在SRAM中，0x0f000000 ~ 0x0fffffff  are defined in LDFLAGS in npc.mk*/ 
  . = _sram_start ;
  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x01000; 
  /*为什么要加上0x8000???*/


  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
