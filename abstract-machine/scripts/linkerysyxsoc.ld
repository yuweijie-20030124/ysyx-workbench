ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  .text : {
    *(entry)
    *(.text*)
  } > mrom : text
  
  etext = .;
  _etext = .;
  
  .rodata : {
    *(.rodata*)
  } > mrom
  
  _data_lma = LOADADDR(.data);
  .data : {
    _data = .;
    *(.data*)
    edata = .;
  } > sram AT> mrom : data
  
  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sram

  _stack_top = ORIGIN(sram) + LENGTH(sram) - 0x1000;
  _stack_pointer = ORIGIN(sram) + LENGTH(sram);
  
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
