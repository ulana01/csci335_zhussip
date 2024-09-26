module Lock(
    input [3:0] code_in,  
    input [2:0] index,     
    output reg locked      
);

        reg [3:0] correct_code[5:0];  
    	initial begin
       
	correct_code[0] = 4'd3;
        correct_code[1] = 4'd3;
        correct_code[2] = 4'd5;
        correct_code[3] = 4'd2;
        correct_code[4] = 4'd5;
        correct_code[5] = 4'd6;
    end

    always @(*) begin
        // Compare the input 
        if (code_in == correct_code[index]) begin
            if (index == 3'd5) begin
                locked = 0;  
	end else begin
                locked = 1;  
	end
        end else begin
            locked = 1;  
    end
    end

endmodule

