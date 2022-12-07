module signextend #(
    parameter Width = 32
)(
    input  logic [Width-1:0] instr,
    input  logic [2:0]       ImmSrc,
    output logic [Width-1:0] ImmOp
);


// assign ImmOp = ImmSrc ? { {20{instr[31]}}, instr[31:20] } : { {20{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };  

always_comb

    case(ImmSrc)

    3'b00:     ImmOp = { {20{instr[31]}}, instr[31:20] }; //I-type
    3'b01:     ImmOp = { {20{instr[31]}}, instr[31:25], instr[11:7] }; //S-type
    3'b10:     ImmOp = { {19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 }; //B-type
    3'b11:     ImmOp = {32'b0}; //R-Type (has no immediate)
    3'b100:    ImmOp = { {12{instr[31]}}, instr[31:12] }; // U-Type
    3'b101:    ImmOp = { {11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0 };  // J-type     
    default:   ImmOp = { {20{instr[31]}}, instr[31:20] }; //default I type
    
    endcase



endmodule
