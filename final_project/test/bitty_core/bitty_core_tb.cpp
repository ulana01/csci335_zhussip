#include "verilated.h"
#include "Vbitty_core.h"
#include <iostream>
#include <bitset>

// Function to print test results
void print_results(int cycle, uint16_t instruction, uint16_t reg_s, uint16_t alu_result, uint8_t done)
{
    std::cout << "Cycle " << cycle << ":" << std::endl;
    std::cout << "Instruction = " << std::bitset<16>(instruction) << std::endl;
    std::cout << "Reg S       = " << std::bitset<16>(reg_s) << " (" << reg_s << ")" << std::endl;
    std::cout << "ALU Result  = " << std::bitset<16>(alu_result) << " (" << alu_result << ")" << std::endl;
    std::cout << "Done        = " << (int)done << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}

int main()
{
    Vbitty_core *bitty = new Vbitty_core;

    // Initialize inputs
    bitty->clk = 0;
    bitty->reset = 1;
    bitty->run = 0;
    bitty->instruction = 0;
    bitty->eval();

    // Reset the processor
    bitty->reset = 0;

    // Test: Run a sample instruction
    bitty->instruction = 0b1010110101001010; // Example instruction
    bitty->run = 1;

    for (int cycle = 0; cycle < 6; ++cycle)
    {
        bitty->clk = !bitty->clk; // Toggle clock
        bitty->eval();            // Evaluate signals
        print_results(
            cycle,
            bitty->instruction,
            bitty->reg_s,      // Register S data
            bitty->alu_result, // ALU result
            bitty->done);
    }

    delete bitty;
    return 0;
}
