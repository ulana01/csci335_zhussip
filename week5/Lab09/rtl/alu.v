// ALU module
module ALU (  
  input wire carry_in,
  input wire signed [15:0] in_a,
  input wire signed [15:0] in_b,
  input wire [3:0] select,
  input wire mode,   // mode = 0: Arithmetic, mode = 1: Logic
  output wire carry_out,
  output wire compare,
  output wire [15:0] alu_out
);
  wire [15:0] arithmetic_result;
  wire [15:0] logic_result;


  Arithmetic_Unit arithmetic_unit (
    .carry_in(carry_in),
    .in_a(in_a),
    .in_b(in_b),
    .select(select),
    .carry_out(carry_out),
    .result(arithmetic_result)
  );


  Logic_Unit logic_unit (
    .in_a(in_a),
    .in_b(in_b),
    .select(select),
    .result(logic_result)
  );


  assign compare = (in_a == in_b) ? 1'b1 : 1'b0;


  assign alu_out = (mode == 1'b0) ? arithmetic_result : logic_result;

endmodule


module Arithmetic_Unit (
  input wire carry_in,
  input wire [15:0] in_a,
  input wire [15:0] in_b,
  input wire [3:0] select,
  output reg carry_out,
  output reg signed [15:0] result
);
  reg [16:0] temp_result; 
  always @(*) begin
    carry_out = 1'b0; 
    temp_result = 17'b0;
    case(select)
      4'b0000: result = in_a;                        // A
      4'b0001: result = in_a + in_b;                 // A + B
      4'b0010: result = in_a - in_b;                 // A - B
      4'b0011: result = in_b - in_a;                 // B - A
      4'b0100: begin
	      temp_result = in_a + in_b + {15'b0, carry_in};
	      result = temp_result[15:0];
	      carry_out = temp_result[16];
      end  // A + B + Carry In
      4'b0101: result = in_a - in_b - {15'b0, carry_in};  // A - B - Carry In
      4'b0110: result = in_a + 1'b1;                 // A + 1
      4'b0111: result = in_a - 1'b1;                 // A - 1
      4'b1000: result = in_a + (in_b & ~in_a);       // A + B' + A
      4'b1001: result = in_a + in_b + (~in_a & in_b);// A plus AB
      4'b1010: result = in_a + in_b + {15'b0, carry_in};  // A + B plus Carry In
      4'b1011: result = in_a + (~in_b);              // A plus B'
      4'b1100: result = in_a - (~in_b + 1'b1);       // A - B' (B minus 1)
      4'b1101: result = in_a + (~in_a | in_b);       // (A + B') + B'
      4'b1110: result = in_a + (in_b & {15'b0, carry_in}); // A + (B and Carry In)
      4'b1111: result = in_a - {15'b0, carry_in};         // A minus Carry In
      default: result = 16'b0;                       // Default case
    endcase

       if (select == 4'b0001 || select == 4'b0100 || select == 4'b1000 || select == 4'b1010) begin
      temp_result = {1'b0, in_a} + {1'b0, in_b} + {16'b0, carry_in};       carry_out = temp_result[16];     end
  end
endmodule

// Logic Unit module
module Logic_Unit (
  input wire [15:0] in_a,
  input wire [15:0] in_b,
  input wire [3:0] select,
  output reg [15:0] result
);
  always @(*) begin
    case(select)
      4'b0000: result = ~in_a;            // A'
      4'b0001: result = in_a & in_b;      // A AND B
      4'b0010: result = in_a | in_b;      // A OR B
      4'b0011: result = in_a ^ in_b;      // A XOR B
      4'b0100: result = ~(in_a & in_b);   // A NAND B
      4'b0101: result = ~(in_a | in_b);   // A NOR B
      4'b0110: result = ~(in_a ^ in_b);   // A XNOR B
      4'b0111: result = in_a;             // Pass-through A
      default: result = 16'b0;            // Default case
    endcase
  end
endmodule

