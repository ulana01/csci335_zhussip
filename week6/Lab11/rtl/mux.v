module Mux(
    input [15:0] data0, data1, data2, data3, data4, data5, data6, data7, data8, data9,  
    input [3:0] sel,  
    output reg [15:0] out  
);
    always @(*) begin
        case (sel)
            4'b0000: out = data0;
            4'b0001: out = data1;
            4'b0010: out = data2;
            4'b0011: out = data3;
            4'b0100: out = data4;
            4'b0101: out = data5;
            4'b0110: out = data6;
            4'b0111: out = data7;
            4'b1000: out = data8;
            4'b1001: out = data9;
            default: out = 16'b0;
        endcase
    end
endmodule

