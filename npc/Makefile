# Makefile for NPC simulation
include ../Makefile

SRC_FILES = csrc/main.cpp
VERILOG_FILES = $(wildcard vsrc/*.v)
VERILATOR = verilator

VERILATOR_FLAGS = -Wall --cc --trace --exe --build -Ivsrc --top-module ysyx_25060170_top

GTK = gtkwave

clean:
	rm -rf obj_dir waveform.vcd

sim:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES)
	$(call git commit, "sim RTL") # % DO NOT REMOVE THIS LINE!!!

gtk:	
	$(GTK) waveform.vcd config.gtkw

all:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES) $(VERILOG_FILES)
	$(call git commit, "build RTL") # % DO NOT REMOVE THIS LINE!!!
	$(GTK) waveform.vcd config.gtkw
