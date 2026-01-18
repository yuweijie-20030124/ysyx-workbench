include /home/yuweijie/required_software_ysyx/verilator/include/verilated.mk
include ../Makefile

ifeq ($(wildcard $(NPC_HOME)/csrc/main.c),) 
  $(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif


# Makefile for NPC simulation
# 检查语法可以用
TEST_MODULE = ysyx_25060170_idu
TEST_FILE   = vsrc/core/$(TEST_MODULE).v

SRC_FILES = $(wildcard csrc/*.c)
##SRC_FILES = csrc/main.c csrc/monitor.c csrc/log.c csrc/sdb.c csrc/timer.c csrc/memory.c \
			csrc/init.c csrc/cpu-
##TEST_FILES = csrc/main.c csrc/monitor.c csrc/log.c csrc/sdb.c csrc/timer.c csrc/memory.c

VERILOG_FILES = $(wildcard vsrc/core/*.v vsrc/core/define.v)
# vsrc/debug/*.v vsrc/utils/*.v

VERILATOR = /home/yuweijie/required_software_ysyx/verilator/bin/verilator


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
					 --top-module ysyx_2ysyx_25060170_if_id_reg5060170_top


#-LDFLAGS " $(NEMU_HOME)/build -lriscv32-nemu-interpreter" 

VERILATOR_FLAGS = -Wall --cc --trace \
					-CFLAGS  " -I /home/yuweijie/ysyx-workbench/npc/include -O2" \
					-CFLAGS  " -I /home/yuweijie/ysyx-workbench/nemu/tools/capstone/repo/include -O2" \
					 --exe --build \
					 -LDFLAGS " -lreadline -lSDL2" \
					 -Ivsrc \
					 -Ivsrc/core \
					 --top-module ysyx_25060170_fishtailcore

GDBVERILATOR_FLAGS = -Wall --cc --trace \
					-CFLAGS  " -g -I /home/yuweijie/ysyx-workbench/npc/include -O0" \
					-CFLAGS  " -g -I /home/yuweijie/ysyx-workbench/nemu/tools/capstone/repo/include -O0" \
					 --exe --build \
					 -LDFLAGS " -lreadline -lSDL2" \
					 -Ivsrc \
					 -Ivsrc/core \
					 --top-module ysyx_25060170_fishtailcore

GTK = gtkwave

clean:
	rm -rf obj_dir waveform.vcd

sim:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES)
	$(call git commit, "sim RTL") # % DO NOT REMOVE THIS LINE!!!

run: 
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES) 
	$(call git commit, "run RTL") # % DO NOT REMOVE THIS LINE!!!
	./obj_dir/Vysyx_25060170_fishtailcore   $(NPC_FLAGS) $(NPC_IMG)

gtk:	
	$(GTK) waveform.vcd config.gtkw &
	

all:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES)
	$(call git commit, "build RTL") # % DO NOT REMOVE THIS LINE!!!
	$(GTK) waveform.vcd config.gtkw

checkall:
	$(VERILATOR) --lint-only -Wall \
		-I$(NPC_HOME)/vsrc \
		-I$(NPC_HOME)/vsrc/core \
		--top-module ysyx_25060170_fishtailcore.v \
		$(VERILOG_FILES) && echo "lint OK" || echo "lint FAILED"

checkone:
	verilator --lint-only -Wall \
	-I$(NPC_HOME)/vsrc \
	-I$(NPC_HOME)/vsrc/core \
	--top-module $(TEST_MODULE) \
	$(TEST_FILE) && echo "lint OK" || echo "lint FAILED"

gdb:
	$(VERILATOR) $(GDBVERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES)
	$(call git commit, "gdb RTL") # % DO NOT REMOVE THIS LINE!!!
	gdb --args ./obj_dir/Vysyx_25060170_fishtailcore $(NPC_FLAGS) $(NPC_IMG)

valgrind:
	rm -rf obj_dir waveform.vcd
	$(VERILATOR) $(GDBVERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES) 
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind.log ./obj_dir/Vysyx_25060170_fishtailcore
