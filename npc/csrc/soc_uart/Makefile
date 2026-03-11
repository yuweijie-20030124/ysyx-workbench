OBJCOPY := riscv64-linux-gnu-objcopy
GCC     := riscv64-linux-gnu-gcc
LD      := riscv64-linux-gnu-ld
OBJDUMP := riscv64-linux-gnu-objdump
CFLAGS  := -march=rv32i_zicsr -mabi=ilp32
LDFLAGS := -T /dev/stdin

# 源文件
SRCS    := uart.c
IMAGE   := uart
OBJS    := $(SRCS:.c=.o)
ELF     := uart.elf
BIN     := uart.bin

# 默认目标
all: $(ELF) $(BIN)

# 编译 .c 到 .o
%.o: %.c
	$(GCC) $(CFLAGS) -c $< -o $@

# 链接脚本（简单方式，指定 text 段起始地址）
uart.ld:
	@echo "SECTIONS { .text 0x20000000 : { *(.text .rodata .data) } }" > $@

# 链接生成 ELF（起始地址 0x20000000）
$(ELF): $(OBJS) uart.ld
	$(GCC) -march=rv32i -mabi=ilp32 -nostdlib -Wl,-Ttext=0x20000000,-e,main -o $@ $(OBJS)

# 从 ELF 提取二进制（只提取 .text 段）
$(BIN): $(ELF)
	$(OBJCOPY) -O binary --only-section=.text $< $@

# 显示信息
info: $(ELF)
	riscv64-linux-gnu-readelf -h $(ELF)
	riscv64-linux-gnu-objdump -d $(ELF) > $(IMAGE).txt

# 清理
clean:
	rm -f $(OBJS) $(ELF) $(BIN) uart.ld

.PHONY: all info clean

run:
