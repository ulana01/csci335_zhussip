#include "verilated.h"
#include "Vcontrol_unit.h"
#include <iostream>
#include <bitset>

// Function to print signals
void print_signals(int cycle, uint16_t instruction, uint8_t state, uint8_t mux_sel, uint8_t en_S, uint8_t en_C, uint8_t en_5, uint8_t alu_sel, uint8_t alu_mode, uint8_t done)
{
    std::cout << "Cycle " << cycle << ":" << std::endl;
    std::cout << "Instruction = " << std::bitset<16>(instruction) << std::endl;
    std::cout << "State       = " << (int)state << std::endl;
    std::cout << "mux_sel     = " << std::bitset<3>(mux_sel) << " (" << (int)mux_sel << ")" << std::endl;
    std::cout << "en_S        = " << (int)en_S << ", en_C = " << (int)en_C << ", en_5 = " << (int)en_5 << std::endl;
    std::cout << "alu_sel     = " << std::bitset<4>(alu_sel) << " (" << (int)alu_sel << ")" << std::endl;
    std::cout << "alu_mode    = " << (int)alu_mode << std::endl;
    std::cout << "done        = " << (int)done << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}

int main()
{
    Vcontrol_unit *cu = new Vcontrol_unit;

    // Initialize inputs
    cu->clk = 0;
    cu->reset = 1;
    cu->run = 0;
    cu->instruction = 0;
    cu->eval();

    // Reset the control unit
    cu->reset = 0;

    // Test: Simulate 3 cycles of an instruction
    cu->instruction = 0b1010110101001010; // Example instruction
    cu->run = 1;

    for (int cycle = 0; cycle < 6; ++cycle)
    {
        cu->clk = !cu->clk; // Toggle clock
        cu->eval();         // Evaluate signals
        print_signals(cycle, cu->instruction, cu->state, cu->mux_sel, cu->en_S, cu->en_C, cu->en_5, cu->alu_sel, cu->alu_mode, cu->done);
    }

    delete cu;
    return 0;
}
