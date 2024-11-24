module mux (
    input [15:0] in0, in1, in2, in3, in4, in5, in6, in7,  // 8 16-bit inputs
    input [2:0] mux_sel,                                // 3-bit selection signal
    output reg [15:0] out                               // 16-bit output
);

    always @(*) begin
        case (mux_sel)
            3'b000: out = in0;  // Select input 0
            3'b001: out = in1;  // Select input 1
            3'b010: out = in2;  // Select input 2
            3'b011: out = in3;  // Select input 3
            3'b100: out = in4;  // Select input 4
            3'b101: out = in5;  // Select input 5
            3'b110: out = in6;  // Select input 6
            3'b111: out = in7;  // Select input 7
            default: out = 16'h0000;  // Default output for invalid selection
        endcase
    end

endmodule
