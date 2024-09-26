#include <verilated.h>
#include "Vlock.h" 
#include <iostream>

void tick(Vlock* lock) {
    lock->eval();  }

int main(int argc, char **argv) {
     Verilated::commandArgs(argc, argv);

     Vlock* lock = new Vlock;

      int correct_sequence[6] = {3, 3, 5, 2, 5, 6};

      int my_sequence[6] = {3, 3, 5, 2, 5, 6};  
  
      for (int i = 0; i < 6; i++) {
        lock->code_in = my_sequence[i];  
        lock->index = i;                   
	tick(lock);                        
        
	std::cout << "Code: " << my_sequence[i] << ", Index: " << i 
                  << ", Locked: " << (int)lock->locked << "\n";
    }

     if (lock->locked == 0) {
        std::cout << "Final Result: System unlocked (PASS)\n";
    } else {
        std::cout << "Final Result: System locked (FAIL)\n";
    }

    delete lock;
    return 0;
}
   
