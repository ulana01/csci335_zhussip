module register (
    input clk, reset, enable,       // Clock, reset, and enable signals
    input [15:0] data_in,           // Data input
    output reg [15:0] data_out      // Data output
);

    // Initialize output to zero
    initial data_out = 16'h0000;

    always @(posedge clk or posedge reset) begin
        if (reset)
            data_out <= 16'h0000;  // Reset to zero
        else if (enable)
            data_out <= data_in;   // Load new data on enable
    end

endmodule
