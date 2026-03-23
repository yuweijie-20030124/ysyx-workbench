MEMORY {
  mrom (rx)  : ORIGIN = 0x20000000, LENGTH = 0x1000   /* 4KB MROM */
  sram (rwx) : ORIGIN = 0x0f000000, LENGTH = 0x2000   /* 8KB SRAM */
}

/* 符号定义 */
_mrom_start = ORIGIN(mrom);
_mrom_end = ORIGIN(mrom) + LENGTH(mrom);
_sram_start = ORIGIN(sram);
_sram_end = ORIGIN(sram) + LENGTH(sram);

SECTIONS {
  /* 设置当前位置为 MROM 起始地址 */
  . = _mrom_start;

  /* 代码段 - 放在 MROM */
  .text : {
    *(.entry)
    *(.text*)
  } > mrom

  /* 只读数据段 - 放在 MROM */
  .rodata : {
    *(.rodata*)
  } > mrom

  /* 数据段 - VMA 在 SRAM，LMA 在 MROM */
  .data : AT(LOADADDR(.text) + SIZEOF(.text) + SIZEOF(.rodata)) {
    __data_vma_start = .;
    *(.data*)
    *(.data.*)
    __data_vma_end = .;
  } > sram

  __data_lma = LOADADDR(.data);
  __data_size = SIZEOF(.data);

  /* BSS 段 - 在 SRAM，不占用文件空间 */
  .bss (NOLOAD) : {
    __bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    __bss_end = .;
  } > sram

  /* 栈 - 在 SRAM，从 BSS 之后开始 */
  .stack (NOLOAD) : {
    . = ALIGN(8);
    _stack_top = .;
    . = . + 0x1000;  /* 4KB stack */
    _stack_top = .;
    _stack_pointer = .;
  } > sram

  /* 堆 - 剩余 SRAM 空间 */
  .heap (NOLOAD) : {
    . = ALIGN(8);
    _heap_start = .;
    . = ORIGIN(sram) + LENGTH(sram);
    _heap_end = .;
  } > sram

  _heap_size = _heap_end - _heap_start;

  /* 确保总大小不超过 SRAM 容量 */
  /* ASSERT(_heap_end <= ORIGIN(sram) + LENGTH(sram), "SRAM overflow!"); */
}