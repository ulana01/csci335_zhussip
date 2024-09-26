#include "Valu.h"
#include "verilated.h"
#include <iostream>

int main() {
    Valu* dut = new Valu();  
    for (int mode = 0; mode <= 1; ++mode) {
        for (int select = 0; select <= 15; ++select) {
           
    	    dut->in_a = 7;               
	    dut->in_b = 3;               
	    dut->carry_in = 1;           
	    dut->select = select;       
	    dut->mode = mode;            

	    dut->eval();

	    int16_t dut_output = static_cast<int16_t>(dut->alu_out);
            signed int expected_output;
            if (mode == 0) {  // Arithmetic 
		switch (select) {
                    case 0: expected_output = dut->in_a; break;                   // A
                    case 1: expected_output = dut->in_a + dut->in_b; break;       // A + B
                    case 2: expected_output = dut->in_a - dut->in_b; break;       // A - B
                    case 3: expected_output = dut->in_b - dut->in_a; break;       // B - A
                    case 4: expected_output = dut->in_a + dut->in_b + dut->carry_in; break;  // A + B + carry_in
                    case 5: expected_output = dut->in_a - dut->in_b - dut->carry_in; break;  // A - B - carry_in
                    case 6: expected_output = dut->in_a + 1; break;               // A + 1
                    case 7: expected_output = dut->in_a - 1; break;               // A - 1
                    case 8: expected_output = dut->in_a + (~dut->in_a & dut->in_b); break; // A + B'
                    case 9: expected_output = dut->in_a + dut->in_b + (~dut->in_a & dut->in_b); break; // A + B' + AB
                    case 10: expected_output = dut->in_a + (~dut->in_b); break;   // A + B'
                    case 11: expected_output = dut->in_a - (~dut->in_b + 1); break;  // A - B'
                    case 12: expected_output = dut->in_a + (dut->in_b & dut->carry_in); break; // A + (B and carry_in)
                    case 13: expected_output = dut->in_a + (~dut->in_a | dut->in_b); break;  // A + B' + B
                    case 14: expected_output = dut->in_a + (~dut->in_a); break;   // A plus AB
                    case 15: expected_output = dut->in_a - dut->carry_in; break;  // A - carry_in
                    default: expected_output = 0; break;
                } 
            } else {  // Logic 
		 switch (select) {
                    case 0: expected_output = ~dut->in_a; break;                 // A'
                    case 1: expected_output = dut->in_a & dut->in_b; break;      // A AND B
                    case 2: expected_output = dut->in_a | dut->in_b; break;      // A OR B
                    case 3: expected_output = dut->in_a ^ dut->in_b; break;      // A XOR B
                    case 4: expected_output = ~(dut->in_a & dut->in_b); break;   // A NAND B
                    case 5: expected_output = ~(dut->in_a | dut->in_b); break;   // A NOR B
                    case 6: expected_output = ~(dut->in_a ^ dut->in_b); break;   // A XNOR B
                    case 7: expected_output = dut->in_a; break;                  // Pass-through A
                    default: expected_output = 0; break;
                }
            }

            
	    dut_output = (int)dut->alu_out;

        
	    if (expected_output == dut_output) {
                std::cout << "Test passed for select=" << select << ", mode=" << mode << std::endl;
            } else {
                std::cout << "Test FAILED for select=" << select << ", mode=" << mode
                          << " Expected: " << expected_output
                          << " Got: " << dut_output << std::endl;
            }
        }
    }

    delete dut;  
    return 0;
}

