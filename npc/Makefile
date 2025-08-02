include /home/yuweijie/required_software_ysyx/verilator/include/verilated.mk
include ../Makefile

ifeq ($(wildcard $(NPC_HOME)/csrc/main.c),) 
  $(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif


# Makefile for NPC simulation
# 检查语法可以用
TEST_MODULE = ysyx_25060170_IFU

SRC_FILES = $(wildcard csrc/*.c)
##SRC_FILES = csrc/main.c csrc/monitor.c csrc/log.c csrc/sdb.c csrc/timer.c csrc/memory.c \
			csrc/init.c csrc/cpu-
##TEST_FILES = csrc/main.c csrc/monitor.c csrc/log.c csrc/sdb.c csrc/timer.c csrc/memory.c

VERILOG_FILES = $(wildcard vsrc/*.v)
VERILATOR = verilator

NPC_IMG?= 

##NPC_FLAGS?= -l=$(NPC_HOME)/npc-log.txt -b
NPC_FLAGS ?= --log=$(NPC_HOME)/npc-log.txt
NPC_FLAGS += -b
NPC_FLAGS += --diff=/home/yuweijie/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so


#VERILATOR_FLAGS = -Wall --cc --trace \
					-CFLAGS  "-g -I /home/yuweijie/ysyx-workbench/npc/include -O2" \
					 --exe --build \
					 -LDFLAGS "-g -lreadline" \
					 -Ivsrc \
					 --top-module ysyx_25060170_top


#-LDFLAGS " $(NEMU_HOME)/build -lriscv32-nemu-interpreter" 

VERILATOR_FLAGS = -Wall --cc --trace \
					-CFLAGS  " -I /home/yuweijie/ysyx-workbench/npc/include -O2" \
					-CFLAGS  " -I /home/yuweijie/ysyx-workbench/nemu/tools/capstone/repo/include -O2" \
					 --exe --build \
					 -LDFLAGS " -lreadline" \
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

gdb:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES) 
	gdb ./obj_dir/Vysyx_25060170_top

valgrind:
	rm -rf obj_dir waveform.vcd
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES) 
	valgrind --leak-check=full obj_dir/Vysyx_25060170_top 

