#include "bitty_emu.h"
#include <iostream>

BittyEmulator::BittyEmulator()
{
    registers_ = std::vector<uint16_t>(8, 0); // Initialize 8 registers to 0
}

uint16_t BittyEmulator::Evaluate(uint16_t instruction)
{
    // Decode the instruction
    uint16_t opcode = (instruction >> 12) & 0xF; // Opcode
    uint16_t reg_x = (instruction >> 8) & 0xF;   // Destination Register
    uint16_t reg_y = (instruction >> 4) & 0xF;   // Source Register
    uint16_t imm_value = instruction & 0xFF;     // Immediate Value

    // std::cout << "Instruction: 0x" << std::hex << instruction
    //           << " | Opcode: 0x" << opcode
    //           << " | Reg X: R" << reg_x
    //           << " | Reg Y: R" << reg_y
    //           << " | Immediate: 0x" << imm_value << std::endl;

    switch (opcode)
    {
    case 0x0: // ADD
        registers_[reg_x] = registers_[reg_x] + registers_[reg_y];
        break;
    case 0x1: // SUBTRACT
        registers_[reg_x] = registers_[reg_x] - registers_[reg_y];
        break;
    case 0x2: // AND
        registers_[reg_x] = registers_[reg_x] & registers_[reg_y];
        break;
    case 0x3: // OR
        registers_[reg_x] = registers_[reg_x] | registers_[reg_y];
        break;
    case 0x4: // XOR
        registers_[reg_x] = registers_[reg_x] ^ registers_[reg_y];
        break;
    case 0x5: // SHIFT LEFT
        registers_[reg_x] = registers_[reg_x] << 1;
        break;
    case 0x6: // SHIFT RIGHT
        registers_[reg_x] = registers_[reg_x] >> 1;
        break;
    case 0xF:                          // LOAD IMMEDIATE
        registers_[reg_x] = imm_value; // Load immediate value into Reg X
        break;
    default:
        std::cerr << "Unknown opcode: " << opcode << std::endl;
        break;
    }

    std::cout << "Updated R" << reg_x << " = " << registers_[reg_x] << std::endl;

    return registers_[reg_x];
}

uint16_t BittyEmulator::GetRegisterValue(uint16_t reg_num) const
{
    if (reg_num >= registers_.size())
    {
        std::cerr << "Invalid register number: " << reg_num << std::endl;
        return 0;
    }
    return registers_[reg_num];
}
