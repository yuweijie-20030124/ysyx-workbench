include /home/yuweijie/required_software_ysyx/verilator/include/verilated.mk
include ../Makefile

ifeq ($(wildcard $(NPC_HOME)/csrc/main.cpp),) 
  $(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif


# Makefile for NPC simulation

##SRC_FILES = $(wildcard csrc/*.cpp)
SRC_FILES = csrc/main.cpp csrc/monitor.cpp csrc/log.cpp csrc/sdb.cpp csrc/timer.cpp
VERILOG_FILES = $(wildcard vsrc/*.v)
VERILATOR = verilator

NPC_IMG?= ##$(OBJ_PATH)matrix-mul-riscv64-npc.bin

##NPC_FLAGS?= -l=$(NPC_HOME)/npc-log.txt -b
NPC_FLAGS?= -l=$(NPC_HOME)/npc-log.txt 

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
