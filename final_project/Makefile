# Variables
VERILATOR = verilator
CPPFLAGS = -Wall -Wno-UNUSED -O3
TESTBENCH = test/alu_tb.cpp   # Updated testbench path
SRC_DIR = rtl

# Target to compile and run ALU testbench
all: alu_tb

alu_tb: $(SRC_DIR)/alu.v $(TESTBENCH)
	$(VERILATOR) --cc $(SRC_DIR)/alu.v --exe $(TESTBENCH)
	make -j -C obj_dir -f Valu.mk Valu
	./obj_dir/Valu

# Clean generated files
clean:
	rm -rf obj_dir
	rm -f alu_tb


