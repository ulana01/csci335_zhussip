#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VControlUnit.h"
#include <iostream>

#define TIME_STEP 10

// Define a utility function to toggle the clock
void tick(VControlUnit *dut, VerilatedVcdC* trace, int tick_count) {
    // Simulate positive edge
    dut->clk = 1;
    dut->eval();
    if (trace) trace->dump(tick_count * TIME_STEP - 2);
    
    // Simulate negative edge
    dut->clk = 0;
    dut->eval();
    if (trace) trace->dump(tick_count * TIME_STEP);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the Control Unit DUT (Device Under Test)
    VControlUnit* dut = new VControlUnit;

    // Trace file setup for debugging
    VerilatedVcdC* trace = nullptr;
    Verilated::traceEverOn(true);
    trace = new VerilatedVcdC;
    dut->trace(trace, 99);
    trace->open("control_unit_tb.vcd");

    // Reset the DUT
    dut->reset = 1;
    dut->clk = 0;
    dut->eval();
    trace->dump(0);

    // Apply reset
    tick(dut, trace, 1);  // First clock cycle
    dut->reset = 0;
    
    // Define the instruction
    // Instruction format: [15:12] for mux_sel, [11:4] for alu_sel, [3] for alu_mode
    uint16_t instruction = 0b1101000010100000; // Example instruction for testing
    
    dut->instruction = instruction;

    // Clock through states (initial to State 0, 1, 2)
    for (int i = 0; i < 6; i++) {
        tick(dut, trace, i + 2);
        std::cout << "Cycle " << i+1 << " State: " << dut->state << std::endl;
        std::cout << "mux_sel: " << std::hex << static_cast<int>(dut->mux_sel) << std::endl;
        std::cout << "alu_sel: " << std::hex << static_cast<int>(dut->alu_sel) << std::endl;
        std::cout << "alu_mode: " << static_cast<int>(dut->alu_mode) << std::endl;
        std::cout << "reg_enables: " << std::hex << static_cast<int>(dut->reg_enables) << std::endl;
        std::cout << "done: " << static_cast<int>(dut->done) << std::endl;
        std::cout << "----------------------------" << std::endl;
    }

    // End of simulation
    dut->final();
    trace->close();
    delete dut;

    return 0;
}

