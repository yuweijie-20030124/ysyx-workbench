include /home/yuweijie/required_software_ysyx/verilator/include/verilated.mk
include ../Makefile

ifeq ($(wildcard $(NPC_HOME)/csrc/main.c),) 
  $(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif


# Makefile for NPC simulation
# 检查语法可以用
TEST_MODULE = ysyx_25060170_GPR

##SRC_FILES = $(wildcard csrc/*.c)
SRC_FILES = csrc/main.c csrc/monitor.c csrc/log.c csrc/sdb.c csrc/timer.c csrc/memory.c
##TEST_FILES = csrc/main.c csrc/monitor.c csrc/log.c csrc/sdb.c csrc/timer.c csrc/memory.c

VERILOG_FILES = $(wildcard vsrc/*.v)
VERILATOR = verilator

NPC_IMG?= 

##NPC_FLAGS?= -l=$(NPC_HOME)/npc-log.txt -b
NPC_FLAGS?= -l $(NPC_HOME)/npc-log.txt -b

VERILATOR_FLAGS = -Wall --cc --trace \
					-CFLAGS  "-I /home/yuweijie/ysyx-workbench/npc/include -O2" \
					 --exe --build \
					 -Ivsrc \
					 --top-module ysyx_25060170_MEM

GTK = gtkwave

clean:
	rm -rf obj_dir waveform.vcd
	rm test

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

checkall:
	$(VERILATOR) --lint-only -Wall \
		-I$(NPC_HOME)/vsrc \
		--top-module ysyx_25060170_top \
		$(VERILOG_FILES)

checkone:
	verilator --lint-only -Wall \
    -I/home/yuweijie/ysyx-workbench/npc/vsrc \
    --top-module $(TEST_MODULE) \
    vsrc/$(TEST_MODULE)

cyuyan:

