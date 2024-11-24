module Register(
    input clk,        
    input reset,      
    input en,         // Enable signal
    input [15:0] d_in,  //input 
    output reg [15:0] d_out  //output
);
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            d_out <= 16'b0;  // Reset the register
        end else if (en) begin
            d_out <= d_in;   // Store the input data if enabled
        end
    end
endmodule

