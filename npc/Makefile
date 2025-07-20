include /home/yuweijie/required_software_ysyx/verilator/include/verilated.mk
include ../Makefile

ifeq ($(wildcard $(NPC_HOME)/csrc/main.cpp),) 
  $(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif

OBJ_PATH=./obj_dir/
VERILOG= ./vsrc/
CC=g++
VERILAGS= -O3 -Wall --trace --cc --exe --build --top-module ysyx_22051013 ##--prof-cfuncs
VERILAGS+= -y ./vsrc 
GTKFLAG = -CFLAGS -g
NPC_IMG?= ##$(OBJ_PATH)matrix-mul-riscv64-npc.bin
NPC_FLAGS?= -l $(OBJ_PATH)npc-log.txt -b
LINK= -LDFLAGS "-lreadline  --no-pie  -ldl -lLLVM-14 -lSDL2" 
LLVM= -CFLAGS "-I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS   -D__STDC_LIMIT_MACROS -fPIE"

# Makefile for NPC simulation

##SRC_FILES = $(wildcard csrc/*.cpp)
SRC_FILES = csrc/main.cpp 
VERILOG_FILES = $(wildcard vsrc/*.v)
VERILATOR = verilator

NPC_IMG?= ##$(OBJ_PATH)matrix-mul-riscv64-npc.bin

NPC_FLAGS?= -l $(OBJ_PATH)npc-log.txt -b

VERILATOR_FLAGS = -Wall --cc --trace \
					-CFLAGS  "-I /home/yuweijie/ysyx-workbench/npc/include -O2" \
					 --exe --build \
					 -Ivsrc \
					 --top-module ysyx_25060170_top

GTK = gtkwave

clean:
	rm -rf obj_dir waveform.vcd

run: 
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES) 
	$(call git commit, "sim RTL") # % DO NOT REMOVE THIS LINE!!!
	./obj_dir/Vysyx_25060170_top   $(NPC_FLAGS) $(NPC_IMG)

gtk:	
	$(GTK) waveform.vcd config.gtkw

all:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES)
	$(call git commit, "build RTL") # % DO NOT REMOVE THIS LINE!!!
	$(GTK) waveform.vcd config.gtkw
