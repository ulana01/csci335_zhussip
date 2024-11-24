module register (
    input clk, reset, enable,
    input [15:0] data_in,
    output reg [15:0] data_out
);

    always @(posedge clk or posedge reset) begin
        if (reset)
            data_out <= 16'h0000;
        else if (enable)
            data_out <= data_in;
    end

endmodule

