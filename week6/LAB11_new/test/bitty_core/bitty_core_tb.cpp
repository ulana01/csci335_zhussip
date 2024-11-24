#include <verilated.h>
#include "Vbitty_core.h"

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    Vbitty_core *core = new Vbitty_core;

    // Initialize inputs
    core->clk = 0;
    core->reset = 1;
    core->instruction = 0x1234; // Example instruction

    // Simulate for a few cycles
    for (int i = 0; i < 10; ++i)
    {
        core->clk = !core->clk;
        core->eval(); // Evaluate the Verilog design

        if (core->done)
        {
            printf("Instruction complete, result = %d\n", core->result);
        }
    }

    delete core;
    return 0;
}
