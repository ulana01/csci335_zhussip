module ControlUnit (
    input clk,
    input reset,
    input [15:0] instruction,
    output reg [3:0] alu_sel,
    output reg alu_mode,
    output reg [7:0] reg_enables,
    output reg [3:0] mux_sel,
    output reg done
);

    reg [1:0] state;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= 0;
            done <= 0;
        end else begin
            case (state)
                2'b00: begin
                    // State 0: Decode the instruction, select registers, and set ALU operation
                    mux_sel <= instruction[15:12]; // Select register for first operand
                    alu_sel <= instruction[7:4];   // ALU operation select
                    alu_mode <= instruction[3];    // ALU mode (arithmetic/logical)
                    reg_enables <= 8'b00000001;    // Enable first register
                    state <= 2'b01;
                end
                2'b01: begin
                    // State 1: Perform ALU operation, enable result register
                    reg_enables <= 8'b00000010;    // Enable second register
                    state <= 2'b10;
                end
                2'b10: begin
                    // State 2: Complete operation
                    done <= 1;                    // Signal that the operation is complete
                    state <= 2'b00;               // Go back to the initial state
                end
                default: begin
                    // Default state to handle unexpected cases
                    state <= 2'b00;
                end
            endcase
        end
    end
endmodule

