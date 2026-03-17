TARGET      := char-test
SRC         := uart.c

CROSS       ?= riscv64-unknown-elf-
CC          := $(CROSS)gcc
OBJCOPY     := $(CROSS)objcopy
OBJDUMP     := $(CROSS)objdump

CFLAGS      := -march=rv32i -mabi=ilp32 -O2 -Wall -Wextra \
               -ffreestanding -fno-builtin -fno-pic \
               -nostdlib -nostartfiles
LDFLAGS     := -march=rv32i -mabi=ilp32 -nostdlib -nostartfiles \
               -Wl,-e,_start -Wl,-Ttext=0x20000000 -Wl,--build-id=none

ELF         := $(TARGET).elf
BIN         := $(TARGET).bin
DUMP        := $(TARGET).dump

.PHONY: all clean dump toolchain

all: toolchain $(ELF) $(BIN)

toolchain:
	@command -v $(CC) >/dev/null 2>&1 || (echo "Missing compiler: $(CC)" && exit 1)
	@command -v $(OBJCOPY) >/dev/null 2>&1 || (echo "Missing objcopy: $(OBJCOPY)" && exit 1)

$(ELF): $(SRC)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

$(BIN): $(ELF)
	$(OBJCOPY) -O binary $< $@

dump: $(ELF)
	$(OBJDUMP) -d $(TARGET).elf > $(TARGET).txt

clean:
	rm -f $(ELF) $(BIN) $(DUMP)
