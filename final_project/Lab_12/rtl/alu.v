module alu (
    input [15:0] A, B,          // 16-bit operands
    input [2:0] ALU_Sel,        // 3-bit ALU operation selector (8 operations)
    output reg [15:0] ALU_Result // ALU result
);

    always @(*) begin
        case (ALU_Sel)
            3'b000: ALU_Result = A + B;            // ADD
            3'b001: ALU_Result = A - B;            // SUBTRACT
            3'b010: ALU_Result = A & B;            // AND
            3'b011: ALU_Result = A | B;            // OR
            3'b100: ALU_Result = A ^ B;            // XOR
            3'b101: ALU_Result = A << B;           // SHIFT LEFT
            3'b110: ALU_Result = A >> B;           // SHIFT RIGHT
            3'b111: begin                          // CMP
                if (A == B) ALU_Result = 16'h0;    // EQUAL
                else if (A > B) ALU_Result = 16'h1; // GREATER THAN
                else ALU_Result = 16'h2;           // LESS THAN
            end
            default: ALU_Result = 16'h0000;        // Default
        endcase
    end

endmodule
