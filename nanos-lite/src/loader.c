#include <proc.h>
#include <elf.h>

typedef struct {
  const char *name;
  size_t size;
  size_t disk_offset;
} RamdiskFile;

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#elif defined(__ISA_AM_NATIVE__) || defined(__ISA_X86_64__)
# define EXPECT_TYPE EM_X86_64
#else
# error Unsupported ISA
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);

static const RamdiskFile ramdisk_files[] = {
#include "files.h"
};

static size_t get_file_offset(const char *filename) {
  if (filename == NULL) {
    return 0;
  }

  for (size_t i = 0; i < LENGTH(ramdisk_files); i++) {
    if (strcmp(ramdisk_files[i].name, filename) == 0) {
      return ramdisk_files[i].disk_offset;
    }
  }

  panic("Can not find program '%s' in ramdisk", filename);
  return 0;
}

static uintptr_t loader(PCB *pcb, const char *filename) {
  (void)pcb;
  size_t file_offset = get_file_offset(filename);
  uint32_t phdr_size = sizeof(Elf_Phdr);
  Elf_Ehdr ehdr;
  Elf_Phdr phdr;
  ramdisk_read(&ehdr, file_offset, sizeof(Elf_Ehdr));
  assert(*(uint32_t *)ehdr.e_ident == 0x464c457f);
  assert(EXPECT_TYPE == ehdr.e_machine);
  uint32_t phdr_num = ehdr.e_phnum;
  for (int i = 0; i < phdr_num; i++) {
    ramdisk_read(&phdr, file_offset + ehdr.e_phoff + i * phdr_size, phdr_size);
    if (phdr.p_type != PT_LOAD) continue;
    ramdisk_read((void *)phdr.p_vaddr, file_offset + phdr.p_offset, phdr.p_filesz);
    memset((void *)phdr.p_vaddr + phdr.p_filesz, 0, phdr.p_memsz - phdr.p_filesz);
  }
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}
