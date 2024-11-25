module bitty_core (
    input clk, reset, run,                  // Clock, reset, and run signals
    input [15:0] instruction,               // 16-bit instruction input
    output done,                            // Done signal
    output [15:0] reg_s,                    // Register S output for testing
    output [15:0] reg_c,                    // Register C output for testing
    output [15:0] alu_result                // ALU result output for testing
);

    // Internal connections
    wire [15:0] reg_data[7:0];              // General-purpose registers (R0-R7)
    wire [2:0] mux_sel;                     // MUX selector
    wire [2:0] alu_sel;                     // ALU operation selector
    wire en_S, en_C, en_5;                  // Enable signals for Reg S and destination register

    // Registers
    generate
        genvar i;
        for (i = 0; i < 8; i = i + 1) begin : gen_registers
            register reg_inst (
                .clk(clk),
                .reset(reset),
                .enable((i == 5) ? en_5 : 0), // Enable destination register R5 for simplicity
                .data_in((i == 5) ? alu_result : 16'h0000), // Data into R5
                .data_out(reg_data[i])
            );
        end
    endgenerate

    // Register S
    register reg_s_inst (
        .clk(clk),
        .reset(reset),
        .enable(en_S),
        .data_in(reg_data[mux_sel]), // Data selected by the MUX
        .data_out(reg_s)
    );

    // Register C (for debugging and output)
    assign reg_c = reg_data[7]; // Example: Assuming Register C is R7

    // ALU
    alu alu_inst (
        .A(reg_s),              // Operand A (Reg S data)
        .B(reg_data[mux_sel]),  // Operand B (selected by MUX)
        .ALU_Sel(alu_sel),      // ALU operation
        .ALU_Result(alu_result) // ALU result
    );

    // Control Unit
    control_unit cu (
        .clk(clk),
        .reset(reset),
        .run(run),
        .instruction(instruction),
        .mux_sel(mux_sel),
        .en_S(en_S),
        .en_C(en_C),
        .en_5(en_5),
        .alu_sel(alu_sel),
        .done(done)
    );

endmodule
