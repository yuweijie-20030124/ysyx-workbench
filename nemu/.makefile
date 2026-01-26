
IMG = $(ELF)
IMAGE = $(IMG:.bin=.o)

NEMUFLAGS += -l $(shell dirname $(IMAGE))/nemu-log.txt
NEMUFLAGS += -f $(IMAGE)
NEMUFLAGS += -b

run: 
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMG)

gdb: 
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) gdb ARGS="$(NEMUFLAGS)" IMG=$(IMG)


