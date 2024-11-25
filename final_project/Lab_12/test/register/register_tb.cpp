#include "verilated.h"
#include "Vregister.h"
#include <iostream>
#include <bitset>
#include <cstdlib> // rand()
#include <ctime>

void print_test(int test_num, uint16_t data_in, uint8_t reset, uint8_t enable, uint16_t data_out)
{
    std::cout << "Test " << test_num << ":" << std::endl;
    std::cout << "in    = " << std::bitset<16>(data_in) << " (" << data_in << ")" << std::endl;
    std::cout << "reset = " << (int)reset << std::endl;
    std::cout << "en    = " << (int)enable << std::endl;
    std::cout << "out   = " << std::bitset<16>(data_out) << " (" << data_out << ")" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}

int main()
{
    Vregister *reg = new Vregister;

    std::srand(std::time(nullptr));

    reg->clk = 0;
    reg->reset = 0;
    reg->enable = 1;
    reg->data_in = std::rand() % 65536; // random 16-bit value
    reg->clk = 1;
    reg->eval(); // Rising edge
    reg->clk = 0;
    reg->eval(); // Falling edge
    print_test(1, reg->data_in, reg->reset, reg->enable, reg->data_out);

    // reset the register
    reg->reset = 1;
    reg->clk = 1;
    reg->eval(); // Rising edge
    reg->clk = 0;
    reg->eval(); // Falling edge
    print_test(2, reg->data_in, reg->reset, reg->enable, reg->data_out);

    // Test 3: Disable writing (retain previous value)
    reg->reset = 0;
    reg->enable = 0;
    reg->data_in = std::rand() % 65536;
    reg->clk = 1;
    reg->eval(); // Rising edge
    reg->clk = 0;
    reg->eval(); // Falling edge
    print_test(3, reg->data_in, reg->reset, reg->enable, reg->data_out);

    // Test 4: Write new data after reset
    reg->enable = 1;
    reg->data_in = std::rand() % 65536;
    reg->clk = 1;
    reg->eval(); // Rising edge
    reg->clk = 0;
    reg->eval(); // Falling edge
    print_test(4, reg->data_in, reg->reset, reg->enable, reg->data_out);

    // Test 5: Reset the register again
    reg->reset = 1;
    reg->clk = 1;
    reg->eval(); // Rising edge
    reg->clk = 0;
    reg->eval(); // Falling edge
    print_test(5, reg->data_in, reg->reset, reg->enable, reg->data_out);

    delete reg;
    return 0;
}
