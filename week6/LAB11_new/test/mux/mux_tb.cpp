#include <verilated.h>
#include "Vmux.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vmux* mux = new Vmux;

    mux->data0 = 5;
    mux->data1 = 10;
    mux->sel = 0;  // Select in0
    mux->eval();
    std::cout << "Mux Output (Select 0): " << mux->out << std::endl;

    mux->sel = 1;  // Select in1
    mux->eval();
    std::cout << "Mux Output (Select 1): " << mux->out << std::endl;

    delete mux;
    return 0;
}

