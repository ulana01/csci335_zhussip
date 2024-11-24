module control_unit (
    input clk, reset, run,                // Clock, Reset, and Run signal
    input [15:0] instruction,             // 16-bit instruction
    output reg [2:0] mux_sel,             // Multiplexer selection signal
    output reg en_S, en_C, en_5,          // Enable signals for registers
    output reg [3:0] alu_sel,             // ALU operation selector
    output reg alu_mode,                  // ALU mode (0 = Arithmetic, 1 = Logic)
    output reg done,                      // Done signal
    output reg [1:0] state                // Current state (for debugging)
);

    // State encoding
    typedef enum reg [1:0] {
        STATE_0 = 2'b00,  // Fetch operand into Reg S
        STATE_1 = 2'b01,  // Perform ALU operation
        STATE_2 = 2'b10   // Write result back to destination register
    } state_t;

    reg [1:0] next_state;          // Next state

    // State transitions
    always @(posedge clk or posedge reset) begin
        if (reset)
            state <= STATE_0;
        else if (run)  // Only transition states if run is high
            state <= next_state;
    end

    // Next state logic and outputs
    always @(*) begin
        // Default values
        next_state = state;
        mux_sel = 3'b000;
        en_S = 0;
        en_C = 0;
        en_5 = 0;
        alu_sel = 4'b0000;
        alu_mode = 0;
        done = 0;

        case (state)
            // State 0: Load operand into Reg S
            STATE_0: begin
                mux_sel = instruction[15:13]; // Rx (first operand)
                en_S = 1;                     // Enable Reg S
                next_state = STATE_1;         // Move to the next state
            end

            // State 1: Perform ALU operation
            STATE_1: begin
                mux_sel = instruction[12:10]; // Ry (second operand)
                en_C = 1;                     // Enable Reg C
                alu_sel = instruction[6:3];   // ALU operation
                alu_mode = instruction[2];    // ALU mode
                next_state = STATE_2;         // Move to the next state
            end

            // State 2: Write result back to destination register
            STATE_2: begin
                en_5 = 1;                     // Enable destination register (Rx)
                done = 1;                     // Set done signal
                next_state = STATE_0;         // Go back to the initial state
            end

            default: next_state = STATE_0;    // Default to State 0
        endcase
    end
endmodule
