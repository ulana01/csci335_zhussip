#include "verilated.h"
#include "Vbitty_core.h"
#include <iostream>
#include <bitset>

void print_results(int cycle, uint16_t instruction, uint16_t reg_s, uint16_t reg_c, uint16_t alu_result, uint8_t done)
{
    std::cout << "Cycle " << cycle << ":\n";
    std::cout << "Instruction = " << std::bitset<16>(instruction) << " (" << instruction << ")\n";
    std::cout << "Reg S       = " << std::bitset<16>(reg_s) << " (0x" << std::hex << reg_s << ")\n";
    std::cout << "Reg C       = " << std::bitset<16>(reg_c) << " (0x" << std::hex << reg_c << ")\n";
    std::cout << "ALU Result  = " << std::bitset<16>(alu_result) << " (0x" << std::hex << alu_result << ")\n";
    std::cout << "Done        = " << (int)done << "\n";
    std::cout << "----------------------------------------------------\n";
}

int main()
{
    Vbitty_core *bitty = new Vbitty_core;

    // inputs
    bitty->clk = 0;
    bitty->reset = 1;
    bitty->run = 0;
    bitty->instruction = 0;
    bitty->eval();

    // Reset the processor
    bitty->reset = 0;

    bitty->instruction = 0b1010110101001010; // example instruction
    bitty->run = 1;

    for (int cycle = 0; cycle < 4; ++cycle)
    {
        if (cycle == 1)
        {
            // loading Reg S
            bitty->reg_s = 0x0F0F;
        }
        if (cycle == 2)
        {
            // loading Reg C
            bitty->reg_c = 0xF00F;
        }
        bitty->clk = !bitty->clk;
        bitty->eval();
        print_results(
            cycle,
            bitty->instruction,
            bitty->reg_s,
            bitty->reg_c,
            bitty->alu_result,
            bitty->done);
    }

    delete bitty;
    return 0;
}
