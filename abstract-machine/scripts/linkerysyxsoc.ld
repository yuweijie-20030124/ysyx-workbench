ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS in npc.mk*/
  . = _pmem_start + _entry_offset;
  . = _mrom_start
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
  }
  .data : {
    *(.data*)
  } : data
  edata = .;
  _data = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }
  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
    /* memory_pmem_start are defined in LDFLAGS in npc.mk*/ 
  . = memory_pmem_start ;
  _heap_start = ALIGN(0x1000);
}
