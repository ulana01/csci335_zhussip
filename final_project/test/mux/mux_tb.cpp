#include "verilated.h"
#include "Vmux.h"
#include <iostream>
#include <bitset>
#include <cstdlib> // rand()
#include <ctime>

void print_test(int test_num, uint16_t in[8], uint8_t sel, uint16_t out)
{
    std::cout << "Test " << test_num << ":" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "in" << i << " = " << std::bitset<16>(in[i]) << " (" << in[i] << ")" << std::endl;
    }
    std::cout << "mux_sel = " << std::bitset<3>(sel) << " (" << (int)sel << ")" << std::endl;
    std::cout << "out     = " << std::bitset<16>(out) << " (" << out << ")" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}

int main()
{
    Vmux *mux = new Vmux;

    std::srand(std::time(nullptr));

    for (int test_num = 1; test_num <= 3; ++test_num)
    {
        uint16_t inputs[8];

        // generate random inputs
        inputs[0] = std::rand() % 65536;
        mux->in0 = inputs[0];
        inputs[1] = std::rand() % 65536;
        mux->in1 = inputs[1];
        inputs[2] = std::rand() % 65536;
        mux->in2 = inputs[2];
        inputs[3] = std::rand() % 65536;
        mux->in3 = inputs[3];
        inputs[4] = std::rand() % 65536;
        mux->in4 = inputs[4];
        inputs[5] = std::rand() % 65536;
        mux->in5 = inputs[5];
        inputs[6] = std::rand() % 65536;
        mux->in6 = inputs[6];
        inputs[7] = std::rand() % 65536;
        mux->in7 = inputs[7];

        // generate a random selection signal
        uint8_t mux_sel = std::rand() % 8;
        mux->mux_sel = mux_sel;

        mux->eval();

        print_test(test_num, inputs, mux_sel, mux->out);
    }

    delete mux;
    return 0;
}
