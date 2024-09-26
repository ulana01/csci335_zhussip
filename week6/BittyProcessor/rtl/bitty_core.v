module BittyCore(
    input clk,          // Clock signal
    input reset,        // Reset signal
    input [15:0] instruction,  // Instruction input
    output [15:0] result,      // Final result from ALU
    output done               // Operation complete signal
);
    // Wires and Registers
    wire [15:0] reg_outs[7:0];  // Outputs from 8 registers
    wire [15:0] alu_out;        // Output from ALU
    wire [15:0] mux_out;        // Output from Mux

    wire [3:0] alu_sel;
    wire alu_mode;
    wire [3:0] mux_sel;
    wire [7:0] reg_enables;

    // Instantiate Control Unit
    ControlUnit CU (
        .clk(clk), 
        .reset(reset), 
        .instruction(instruction), 
        .alu_sel(alu_sel), 
        .alu_mode(alu_mode), 
        .reg_enables(reg_enables), 
        .mux_sel(mux_sel),
        .done(done)
    );

    // Instantiate ALU
    ALU myALU (
        .in_a(mux_out), 
        .in_b(reg_outs[1]),  // Assume second operand comes from register 1
        .sel(alu_sel), 
        .mode(alu_mode), 
        .out(alu_out)
    );

    // Instantiate Registers
    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : regs
            Register reg_inst (
                .clk(clk),
                .reset(reset),
                .en(reg_enables[i]),
                .d_in(alu_out),
                .d_out(reg_outs[i])
            );
        end
    endgenerate

    // Instantiate Mux
    Mux myMux (
        .data0(reg_outs[0]), .data1(reg_outs[1]), .data2(reg_outs[2]), .data3(reg_outs[3]),
        .data4(reg_outs[4]), .data5(reg_outs[5]), .data6(reg_outs[6]), .data7(reg_outs[7]),
        .select(mux_sel),
        .out(mux_out)
    );

    // Output final result
    assign result = alu_out;

endmodule

