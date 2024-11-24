#include <verilated.h>
#include "Vcontrol_unit.h"  // Include the generated header from Verilator
#include <iostream>

// Clock tick function
void tick(Vcontrol_unit* dut, vluint64_t& main_time) {
    dut->clk = 0;
    dut->eval();
    main_time++;
    dut->clk = 1;
    dut->eval();
    main_time++;
}

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vcontrol_unit* dut = new Vcontrol_unit;

    vluint64_t main_time = 0;  // Simulation time
    dut->reset = 1;  // Apply reset
    tick(dut, main_time);  // Tick for reset

    // Test 1: Check the first instruction
    dut->reset = 0;  // Release reset
    dut->instruction = 0xD095; // Example instruction (arbitrary)
    
    for (int i = 0; i < 10; i++) {
        tick(dut, main_time);  // Tick the clock
    }

    // Check the output after the first instruction cycle
    std::cout << "Test 1: First Instruction" << std::endl;
    std::cout << "mux_sel = " << std::hex << (int)dut->mux_sel << std::endl;
    std::cout << "alu_sel = " << std::hex << (int)dut->alu_sel << std::endl;
    std::cout << "alu_mode = " << (int)dut->alu_mode << std::endl;
    std::cout << "reg_enables = " << std::hex << (int)dut->reg_enables << std::endl;
    std::cout << "done = " << (int)dut->done << std::endl;

    // Test 2: Another instruction with a different pattern
    dut->instruction = 0xA3EC; // Another instruction
    for (int i = 0; i < 10; i++) {
        tick(dut, main_time);  // Tick the clock
    }

    // Check the output after the second instruction cycle
    std::cout << "Test 2: Second Instruction" << std::endl;
    std::cout << "mux_sel = " << std::hex << (int)dut->mux_sel << std::endl;
    std::cout << "alu_sel = " << std::hex << (int)dut->alu_sel << std::endl;
    std::cout << "alu_mode = " << (int)dut->alu_mode << std::endl;
    std::cout << "reg_enables = " << std::hex << (int)dut->reg_enables << std::endl;
    std::cout << "done = " << (int)dut->done << std::endl;

    delete dut;  // Free memory
    exit(0);
}

