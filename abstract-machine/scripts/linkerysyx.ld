/* 在文件头部（如果希望更明确）可添加 MEMORY 段： */
MEMORY {
  mrom (rx)  : ORIGIN = 0x20000000, LENGTH = 0x1000   /* 4KB MROM (示例) */
  sram (rwx) : ORIGIN = 0x0f000000, LENGTH = 0x2000   /* 8KB SRAM (实现的子区) */
}

/* ... 之前的 .text 放到 mrom ... */
. = ORIGIN(mrom);
.text : {
  *(entry)
  *(.text*)
} > mrom

/* rodata 可以放 mrom */
.rodata : { *(.rodata*) } > mrom

/* 把 .data 的 VMA 放到 SRAM，但 LMA 放到 MROM（即 .data 的内容会被放入 mrom 区段） */
.data : AT(LOADADDR(.data)) {
  __data_vma_start = .;      /* VMA 开始（SRAM 地址） */
  *(.data*)
  *(.data.*)
  __data_vma_end = .;        /* VMA 结束（SRAM 地址结束） */
} > sram

/* 导出 LMA 的地址（linker 提供 LOADADDR） */
__data_lma = LOADADDR(.data);
__data_size = __data_vma_end - __data_vma_start;

/* BSS 在 SRAM */
.bss : {
  __bss_start = .;
  *(.bss*)
  *(.sbss*)
  *(.scommon)
  __bss_end = .;
} > sram

/* Stack / heap 在 SRAM 的安全小区（例如起始于 SRAM，并只分配 8KB） */
. = ORIGIN(sram);
_stack_top = ALIGN(0x1000);
. = _stack_top + 0x2000;     /* 8KB limit */
_stack_pointer = .;
_heap_start = ALIGN(0x1000);