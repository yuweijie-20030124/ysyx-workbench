#include <cstdint>
#include <map>
#include "Vysyx_25060170_top_Dpi.h"  // 由 Verilator 生成

class AddiMemory {
private:
    std::map<uint32_t, uint32_t> memory;  // 地址 -> 指令

public:
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
    uint32_t mem_read(uint32_t addr) {
        return addi_mem.read_instruction(addr);
    }
}