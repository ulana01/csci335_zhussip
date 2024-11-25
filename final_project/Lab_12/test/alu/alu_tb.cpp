#include "verilated.h"
#include "Valu.h"
#include <iostream>
#include <bitset>

void print_test(int test_num, uint16_t a, uint16_t b, uint8_t sel, uint16_t out)
{
    std::cout << "Test " << test_num << ":" << std::endl;
    std::cout << "A       = " << std::bitset<16>(a) << " (" << a << ")" << std::endl;
    std::cout << "B       = " << std::bitset<16>(b) << " (" << b << ")" << std::endl;
    std::cout << "ALU_Sel = " << std::bitset<3>(sel) << " (" << (int)sel << ")" << std::endl;
    std::cout << "Result  = " << std::bitset<16>(out) << " (" << out << ")" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}

int main()
{
    Valu *alu = new Valu;

    // Test ADD (000)
    alu->A = 10;
    alu->B = 5;
    alu->ALU_Sel = 0b000;
    alu->eval();
    print_test(1, alu->A, alu->B, alu->ALU_Sel, alu->ALU_Result);

    // Test SUB (001)
    alu->A = 15;
    alu->B = 5;
    alu->ALU_Sel = 0b001;
    alu->eval();
    print_test(2, alu->A, alu->B, alu->ALU_Sel, alu->ALU_Result);

    // Test AND (010)
    alu->A = 0xF0F0;
    alu->B = 0x0F0F;
    alu->ALU_Sel = 0b010;
    alu->eval();
    print_test(3, alu->A, alu->B, alu->ALU_Sel, alu->ALU_Result);

    // Test CMP (111)
    alu->A = 10;
    alu->B = 20;
    alu->ALU_Sel = 0b111;
    alu->eval();
    print_test(4, alu->A, alu->B, alu->ALU_Sel, alu->ALU_Result);

    delete alu;
    return 0;
}
