module alu(
    input  wire [15:0] in_a,    
    input  wire [15:0] in_b,    
    input  wire [3:0]  sel,     
    input  wire        mode,    
    output reg  [15:0] out,     
    output reg         compare  
);

    always @(*) begin
        if (mode == 1'b0) begin
            case (sel)
                4'b0000: out = in_a + in_b;           
		4'b0001: out = in_a - in_b;           
                4'b0010: out = in_a & in_b;           
                4'b0011: out = in_a | in_b;           
		4'b0100: out = in_a ^ in_b;           
                4'b0101: out = ~in_a;                 
                default: out = 16'b0;
            endcase
        end else begin
            //(mode = 1)
            case (sel)
                4'b0000: out = in_a << in_b;                          
		4'b0001: out = in_a >> in_b;          
		default: out = 16'b0;
            endcase
        end
        compare = (in_a == in_b) ? 1'b1 : 1'b0;   
    end

endmodule


