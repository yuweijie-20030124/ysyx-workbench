#include <cstdint>
#include <map>
#include "Vmem_dpi.h"  // 由 Verilator 生成

class AddiMemory {
private:
    std::map<uint32_t, uint32_t> memory;  // 地址 -> 指令

public:
    // 向内存添加 addi 指令
    void add_instruction(uint32_t addr, uint32_t rd, uint32_t rs1, int32_t imm) {
        // addi 编码格式: imm[11:0] | rs1 | funct3 | rd | opcode
        uint32_t instruction = (imm & 0xFFF) << 20;  // imm[11:0]
        instruction |= (rs1 & 0x1F) << 15;          // rs1
        instruction |= 0x0 << 12;                   // funct3 (addi)
        instruction |= (rd & 0x1F) << 7;            // rd
        instruction |= 0x13;                        // opcode (OP-IMM)
        
        memory[addr] = instruction;
    }

    // DPI-C 函数：读取指令
    uint32_t read_instruction(uint32_t addr) {
        if (memory.find(addr) != memory.end()) {
            return memory[addr];
        }
        return 0;  // 如果地址不存在，返回 nop (0x00000013)
    }
};

// 全局内存实例
static AddiMemory addi_mem;

// DPI-C 函数
extern "C" {
    void add_addi_instruction(uint32_t addr, uint32_t rd, uint32_t rs1, int32_t imm) {
        addi_mem.add_instruction(addr, rd, rs1, imm);
    }

    uint32_t mem_read(uint32_t addr) {
        return addi_mem.read_instruction(addr);
    }
}