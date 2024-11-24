module alu (
    input [15:0] A, B,          // 16-bit operands
    input [3:0] ALU_Sel,        // ALU operation selector (16 operations)
    input mode,                 // Mode: 0 = Arithmetic, 1 = Logic
    output reg [15:0] ALU_Result, // ALU result
    output reg Zero             // Zero flag
);

    always @(*) begin
        if (mode == 0) begin
            // Arithmetic Mode
            case (ALU_Sel)
                4'b0000: ALU_Result = A + B;            // ADD
                4'b0001: ALU_Result = A - B;            // SUBTRACT
                4'b0010: ALU_Result = A * B;            // MULTIPLY
                4'b0011: ALU_Result = (B != 0) ? A / B : 16'hFFFF; // DIVIDE with divide-by-zero check
                4'b0100: ALU_Result = A % B;            // MODULUS
                4'b0101: ALU_Result = A + 1;            // INCREMENT A
                4'b0110: ALU_Result = A - 1;            // DECREMENT A
                4'b0111: ALU_Result = (A > B) ? 16'h1 : 16'h0; // GREATER THAN
                4'b1000: ALU_Result = (A == B) ? 16'h1 : 16'h0; // EQUAL TO
                4'b1001: ALU_Result = (A < B) ? 16'h1 : 16'h0; // LESS THAN
                4'b1010: ALU_Result = (A >= B) ? 16'h1 : 16'h0; // GREATER THAN OR EQUAL
                4'b1011: ALU_Result = (A <= B) ? 16'h1 : 16'h0; // LESS THAN OR EQUAL
                4'b1100: ALU_Result = -(A);            // NEGATION
                4'b1101: ALU_Result = A + B + 1;       // ADD WITH CARRY (Example)
                4'b1110: ALU_Result = B - A;           // REVERSE SUBTRACT
                4'b1111: ALU_Result = 16'h0;           // ARITHMETIC RESET (0)
                default: ALU_Result = 16'h0000;        // Default
            endcase
        end else begin
            // Logic Mode
            case (ALU_Sel)
                4'b0000: ALU_Result = A & B;            // AND
                4'b0001: ALU_Result = A | B;            // OR
                4'b0010: ALU_Result = A ^ B;            // XOR
                4'b0011: ALU_Result = ~A;               // NOT
                4'b0100: ALU_Result = A << 1;           // Logical SHIFT LEFT
                4'b0101: ALU_Result = A >> 1;           // Logical SHIFT RIGHT
                4'b0110: ALU_Result = A << B;           // Variable SHIFT LEFT
                4'b0111: ALU_Result = A >> B;           // Variable SHIFT RIGHT
                4'b1000: ALU_Result = ~(A & B);         // NAND
                4'b1001: ALU_Result = ~(A | B);         // NOR
                4'b1010: ALU_Result = ~(A ^ B);         // XNOR
                4'b1011: ALU_Result = {A[7:0], A[15:8]}; // BYTE SWAP
                4'b1100: ALU_Result = (A == B) ? 16'hFFFF : 16'h0000; // EQUALITY MASK
                4'b1101: ALU_Result = A & ~B;           // AND-NOT
                4'b1110: ALU_Result = A | ~B;           // OR-NOT
                4'b1111: ALU_Result = 16'hFFFF;         // LOGIC RESET (All 1's)
                default: ALU_Result = 16'h0000;         // Default
            endcase
        end

        // Zero flag: Set if result is 0
        Zero = (ALU_Result == 16'h0000) ? 1'b1 : 1'b0;
    end

endmodule
