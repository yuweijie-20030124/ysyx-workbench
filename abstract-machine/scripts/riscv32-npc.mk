include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/npc.mk

# 修改这里：rv32e_zicsr -> rv32i_zicsr, ilp32e -> ilp32
COMMON_CFLAGS += -march=rv32i_zicsr -mabi=ilp32  # overwrite

# LDFLAGS 通常不需要修改，但确保链接器支持 RV32I
LDFLAGS       += -melf32lriscv                    # overwrite

# 如果你的 libgcc 库是为 RV32E 编译的，可能需要重新编译为 RV32I
AM_SRCS += riscv/npc/libgcc/div.S \
           riscv/npc/libgcc/muldi3.S \
           riscv/npc/libgcc/multi3.c \
           riscv/npc/libgcc/ashldi3.c \
           riscv/npc/libgcc/unused.c