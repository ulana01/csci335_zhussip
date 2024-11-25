#include "verilated.h"
#include "Vcontrol_unit.h"
#include <iostream>
#include <bitset>

void print_signals(int cycle, uint16_t instruction, uint8_t mux_sel, uint8_t en_S, uint8_t en_C, uint8_t en_5, uint8_t alu_sel, uint8_t done)
{
    std::cout << "Cycle " << cycle << ":\n";
    std::cout << "Instruction = " << std::bitset<16>(instruction) << "\n";
    std::cout << "mux_sel     = " << std::bitset<3>(mux_sel) << " (" << (int)mux_sel << ")\n";
    std::cout << "en_S        = " << (int)en_S << ", en_C = " << (int)en_C << ", en_5 = " << (int)en_5 << "\n";
    std::cout << "alu_sel     = " << std::bitset<3>(alu_sel) << " (" << (int)alu_sel << ")\n";
    std::cout << "done        = " << (int)done << "\n";
    std::cout << "----------------------------------------------------\n";
}

int main()
{
    Vcontrol_unit *cu = new Vcontrol_unit;

    // inputs
    cu->clk = 0;
    cu->reset = 1;
    cu->run = 0;
    cu->instruction = 0;
    cu->eval();

    // reset
    cu->reset = 0;

    cu->instruction = 0b1010110101001010; // Example
    cu->run = 1;

    for (int cycle = 0; cycle < 4; ++cycle)
    {
        cu->clk = !cu->clk; // Toggle clock
        cu->eval();
        print_signals(cycle, cu->instruction, cu->mux_sel, cu->en_S, cu->en_C, cu->en_5, cu->alu_sel, cu->done);
    }

    delete cu;
    return 0;
}
