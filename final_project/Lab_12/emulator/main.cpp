#include <iostream>
#include <cassert>
#include "bitty_emu.h"

void TestADD()
{
    BittyEmulator emulator;

    std::cout << "Running TestADD..." << std::endl;

    // Load R1 = 2
    emulator.Evaluate(0xF102); // LOAD R1 with 2
    assert(emulator.GetRegisterValue(1) == 2);

    // Load R2 = 2
    emulator.Evaluate(0xF202); // LOAD R2 with 2
    assert(emulator.GetRegisterValue(2) == 2);

    // Add R1 = R1 + R2
    emulator.Evaluate(0x0121); // ADD R1 and R2
    assert(emulator.GetRegisterValue(1) == 4);

    std::cout << "TestADD passed!" << std::endl;
}

void TestSUBTRACT()
{
    BittyEmulator emulator;

    std::cout << "Running TestSUBTRACT..." << std::endl;

    // Load R1 = 5
    emulator.Evaluate(0xF105); // LOAD R1 with 5
    assert(emulator.GetRegisterValue(1) == 5);

    // Load R2 = 3
    emulator.Evaluate(0xF203); // LOAD R2 with 3
    assert(emulator.GetRegisterValue(2) == 3);

    // Subtract R1 = R1 - R2
    emulator.Evaluate(0x1121); // SUBTRACT R1 and R2
    assert(emulator.GetRegisterValue(1) == 2);

    std::cout << "TestSUBTRACT passed!" << std::endl;
}

void TestAND()
{
    BittyEmulator emulator;

    std::cout << "Running TestAND..." << std::endl;

    // Load R1 = 0b1010
    emulator.Evaluate(0xF10A); // LOAD R1 with 10
    assert(emulator.GetRegisterValue(1) == 10);

    // Load R2 = 0b1100
    emulator.Evaluate(0xF20C); // LOAD R2 with 12
    assert(emulator.GetRegisterValue(2) == 12);

    // Perform AND R1 = R1 & R2
    emulator.Evaluate(0x2121); // AND R1 and R2
    assert(emulator.GetRegisterValue(1) == (10 & 12));

    std::cout << "TestAND passed!" << std::endl;
}

void TestOR()
{
    BittyEmulator emulator;

    std::cout << "Running TestOR..." << std::endl;

    // Load R1 = 0b1010
    emulator.Evaluate(0xF10A); // LOAD R1 with 10
    assert(emulator.GetRegisterValue(1) == 10);

    // Load R2 = 0b1100
    emulator.Evaluate(0xF20C); // LOAD R2 with 12
    assert(emulator.GetRegisterValue(2) == 12);

    // Perform OR R1 = R1 | R2
    emulator.Evaluate(0x3121); // OR R1 and R2
    assert(emulator.GetRegisterValue(1) == (10 | 12));

    std::cout << "TestOR passed!" << std::endl;
}

void TestXOR()
{
    BittyEmulator emulator;

    std::cout << "Running TestXOR..." << std::endl;

    // Load R1 = 0b1010
    emulator.Evaluate(0xF10A); // LOAD R1 with 10
    assert(emulator.GetRegisterValue(1) == 10);

    // Load R2 = 0b1100
    emulator.Evaluate(0xF20C); // LOAD R2 with 12
    assert(emulator.GetRegisterValue(2) == 12);

    // Perform XOR R1 = R1 ^ R2
    emulator.Evaluate(0x4121); // XOR R1 and R2
    assert(emulator.GetRegisterValue(1) == (10 ^ 12));

    std::cout << "TestXOR passed!" << std::endl;
}

void TestShiftLeft()
{
    BittyEmulator emulator;

    std::cout << "Running TestShiftLeft..." << std::endl;

    // Load R1 = 5
    emulator.Evaluate(0xF105); // LOAD R1 with 5
    assert(emulator.GetRegisterValue(1) == 5);

    // Shift left R1
    emulator.Evaluate(0x5120); // SHIFT LEFT R1
    assert(emulator.GetRegisterValue(1) == (5 << 1));

    std::cout << "TestShiftLeft passed!" << std::endl;
}

void TestShiftRight()
{
    BittyEmulator emulator;

    std::cout << "Running TestShiftRight..." << std::endl;

    // Load R1 = 10
    emulator.Evaluate(0xF10A); // LOAD R1 with 10
    assert(emulator.GetRegisterValue(1) == 10);

    // Shift right R1
    emulator.Evaluate(0x6120); // SHIFT RIGHT R1
    assert(emulator.GetRegisterValue(1) == (10 >> 1));

    std::cout << "TestShiftRight passed!" << std::endl;
}

int main()
{
    TestADD();
    TestSUBTRACT();
    TestAND();
    TestOR();
    TestXOR();
    TestShiftLeft();
    TestShiftRight();

    std::cout << "All tests completed successfully!" << std::endl;
    return 0;
}
