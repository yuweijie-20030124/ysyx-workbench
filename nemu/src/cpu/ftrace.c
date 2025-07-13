#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <assert.h>

void parse_elf(const char *elf_file) {
    // 打开 ELF 文件
    FILE *fp = fopen(elf_file, "rb");
    //assert(fp, "Can not open '%s'", elf_file);
    //printf("已经读取到文件\n");

    // 读取 ELF 头
    Elf32_Ehdr elf_head;
    int a = fread(&elf_head, sizeof(Elf32_Ehdr), 1, fp);
    if (a != 1) {
        printf("fail to read head\n");
        exit(0);
    }

    // 检查 ELF 魔数
    if (elf_head.e_ident[0] != 0x7F ||
        elf_head.e_ident[1] != 'E' ||
        elf_head.e_ident[2] != 'L' ||
        elf_head.e_ident[3] != 'F') {
        printf("Not a ELF file\n");
        exit(0);
    }

    // 读取 section header 表
    Elf32_Shdr *shdr = (Elf32_Shdr *)malloc(sizeof(Elf32_Shdr) * elf_head.e_shnum);
    if (shdr == NULL) {
        printf("shdr malloc failed\n");
        exit(0);
    }
	//找到段表的位置，然后赋予fp指针
	//然后读段表内容。放到shdr中
    fseek(fp, elf_head.e_shoff, SEEK_SET);
    a = fread(shdr, sizeof(Elf32_Shdr), elf_head.e_shnum, fp);

    if (a != elf_head.e_shnum) {
        printf("fail to read section headers\n");
        exit(0);
    }

	/****/

    // 读取段表字符串表
    Elf32_Shdr shstr = shdr[elf_head.e_shstrndx];
    char *shstrtab = (char *)malloc(shstr.sh_size);
    fseek(fp, shstr.sh_offset, SEEK_SET);
    int b = fread(shstrtab, shstr.sh_size, 1, fp);

	//找到sh_type的符号表和字符串表
    // 找到 .symtab 和 .strtab
    Elf32_Shdr *symtab_sh = NULL;
    Elf32_Shdr *strtab_sh = NULL;
    for (int i = 0; i < elf_head.e_shnum; i++) {
        char *secname = shstrtab + shdr[i].sh_name;
        if (strcmp(secname, ".symtab") == 0) symtab_sh = &shdr[i];
        if (strcmp(secname, ".strtab") == 0) strtab_sh = &shdr[i];
    }
    if (!symtab_sh || !strtab_sh) {
        printf("No .symtab or .strtab found!\n");
        exit(1);
    }

    // 读取符号表
    Elf32_Sym *symtab = (Elf32_Sym *)malloc(symtab_sh->sh_size);
    fseek(fp, symtab_sh->sh_offset, SEEK_SET);
    int c = fread(symtab, symtab_sh->sh_size, 1, fp);
    int sym_count = symtab_sh->sh_size / sizeof(Elf32_Sym);

    // 读取字符串表
    char *strtab = (char *)malloc(strtab_sh->sh_size);
    fseek(fp, strtab_sh->sh_offset, SEEK_SET);
    int d = fread(strtab, strtab_sh->sh_size, 1, fp);

    // 遍历符号表，输出 type 为函数的符号的 value 和 name
	printf("   Value     ");
	printf(" Function");
	printf("\n");
    for (int i = 0; i < sym_count; i++) {
        Elf32_Sym *sym = &symtab[i];
        unsigned char type = ELF32_ST_TYPE(sym->st_info);
        if (type == STT_FUNC) {
            const char *name = strtab + sym->st_name;
            printf("0x%x:   %s\n", sym->st_value, name);
        }
    }
    if(b+c+d == 0){printf("none sence");}
    // 释放资源
    free(shdr);
    free(shstrtab);
    free(symtab);
    free(strtab);
    fclose(fp);
}

