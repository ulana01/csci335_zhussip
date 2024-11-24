#include <verilated.h>
#include "Vregister.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vregister* reg = new Vregister;

    reg->clk = 0;
    reg->reset = 1;
    reg->eval();  // Apply reset
    std::cout << "Register Output After Reset: " << reg->d_out << std::endl;

    reg->reset = 0;
    reg->en = 1;
    reg->d_in = 5;
    reg->clk = 1;
    reg->eval();  // Load data
    std::cout << "Register Output After Load: " << reg->d_out << std::endl;

    delete reg;
    return 0;
}

