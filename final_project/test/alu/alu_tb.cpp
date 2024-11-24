#include "verilated.h"
#include "Valu.h"
#include <iostream>
#include <bitset>

void print_test(int test_num, uint16_t a, uint16_t b, uint8_t sel, uint8_t mode, uint16_t out)
{
    std::cout << "Test " << test_num << ":" << std::endl;
    std::cout << "a    = " << std::bitset<16>(a) << " (" << a << ")" << std::endl;
    std::cout << "b    = " << std::bitset<16>(b) << " (" << b << ")" << std::endl;
    std::cout << "sel  = " << std::bitset<4>(sel) << " (" << (int)sel << ")" << std::endl;
    std::cout << "mode = " << (int)mode << std::endl;
    std::cout << "out  = " << std::bitset<16>(out) << " (" << out << ")" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}

int main()
{
    Valu *alu = new Valu;

    // Test Case 1
    alu->A = 49911;    // 1100001011110111
    alu->B = 6755;     // 0001101001100011
    alu->ALU_Sel = 14; // 1110
    alu->mode = 1;     // Logic mode
    alu->eval();
    print_test(1, alu->A, alu->B, alu->ALU_Sel, alu->mode, alu->ALU_Result);

    // Test Case 2
    alu->A = 27956;   // 0110110011010100
    alu->B = 40161;   // 1001110011100001
    alu->ALU_Sel = 4; // 0100
    alu->mode = 0;    // Arithmetic mode
    alu->eval();
    print_test(2, alu->A, alu->B, alu->ALU_Sel, alu->mode, alu->ALU_Result);

    // Test Case 3
    alu->A = 51893;   // 1100101010110101
    alu->B = 19648;   // 0100110010000000
    alu->ALU_Sel = 1; // 0011
    alu->mode = 0;    // Arithmetic mode
    alu->eval();
    print_test(3, alu->A, alu->B, alu->ALU_Sel, alu->mode, alu->ALU_Result);

    delete alu;
    return 0;
}
