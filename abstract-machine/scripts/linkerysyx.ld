ENTRY(_start)

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K   /* 4KB MROM */
  sram : ORIGIN = 0x0f000000, LENGTH = 8K   /* 8KB SRAM */
}

SECTIONS {
  .text : {
    *(entry)
    *(.text*)
  } > mrom
  
  .rodata : {
    *(.rodata*)
  } > mrom
  
  /* 使得 bootloader 能获取到在 Flash/MROM 里的只读起始地址 */
  _data_lma = LOADADDR(.data);
  .data : {
    /* 这两个符号必须与你在 trm.c 里面的一致 */
    _data_vma_start = .;
    *(.data*)
    _data_vma_end = .;
  } > sram AT> mrom   /* LMA 在 mrom, VMA 在 sram */
  
  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sram

  /* 堆栈向低地址生长，初始化到 SRAM 的最高地址 */
  _stack_top = ORIGIN(sram) + LENGTH(sram);
  _stack_pointer = _stack_top;
  
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}