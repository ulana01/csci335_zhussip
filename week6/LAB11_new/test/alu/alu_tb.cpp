#include <verilated.h>
#include "Valu.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Valu* alu = new Valu;

    // Example input values for testing
    alu->in_a = 5;
    alu->in_b = 3;
    alu->sel = 0;  // Add
    alu->eval();
    std::cout << "ALU Add Result: " << alu->out << std::endl;

    alu->in_a = 7;
    alu->in_b = 3;
    alu->sel = 1;  // Subtract
    alu->eval();
    std::cout << "ALU Sub Result: " << alu->out << std::endl;

    delete alu;
    return 0;
}

