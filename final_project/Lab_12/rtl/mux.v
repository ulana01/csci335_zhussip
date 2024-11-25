module mux (
    input [15:0] in0, in1, in2, in3, in4, in5, in6, in7, // 8 16-bit inputs
    input [2:0] mux_sel,                                // 3-bit selection signal
    output reg [15:0] out                               // 16-bit output
);

    always @(*) begin
        // Default output to zero to avoid uninitialized behavior
        out = 16'h0000;

        // Select the correct input based on mux_sel
        case (mux_sel)
            3'b000: out = in0;
            3'b001: out = in1;
            3'b010: out = in2;
            3'b011: out = in3;
            3'b100: out = in4;
            3'b101: out = in5;
            3'b110: out = in6;
            3'b111: out = in7;
            default: out = 16'h0000; // Explicit default for invalid mux_sel
        endcase
    end

endmodule
