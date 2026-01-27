
IMG = $(ELF)
IMAGE = $(IMG:.bin=.o)

NPCFLAGS += -l $(shell dirname $(IMAGE))/npc-log.txt
NPCFLAGS += -f $(IMAGE)
NPCFLAGS += --diff=/home/yuweijie/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
NPCFLAGS += -b

run: 
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) run NPC_FLAGS="$(NPCFLAGS)" NPC_IMG=$(IMG)

gdb: 
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) gdb NPC_FLAGS="$(NPCFLAGS)" NPC_IMG=$(IMG)


