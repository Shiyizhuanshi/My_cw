module counter_unit #(
    parameter PC_WIDTH = 32 // the length of pc and imme
)(
    input  logic                clk,
    input  logic                rst,
    input  logic [1:0]          PCsrc,
    input  logic [PC_WIDTH-1:0] ImmOp,
    input  logic [PC_WIDTH-1:0] RD1,
    output logic [PC_WIDTH-1:0] PC
);

// logic [PC_WIDTH-1:0] next_PC;
// logic [PC_WIDTH-1:0] branch_PC;

// assign branch_PC = PC + ImmOp;                                        //compute branch_pc
// assign next_PC = PCsrc ? branch_PC : PC + {{PC_WIDTH-1{1'b0}}, 1'b1};    //compute inc_PC

always_ff @ (posedge clk)begin
  if (rst)           PC <= {PC_WIDTH{32'hBFC00000}};
  // else PC <= PCsrc[0] ? PC + ImmOp : PC + 4;
  else case(PCsrc)
          2'b00: PC <= PC  + 4;        //normal
          2'b01: PC <= PC  + ImmOp;    //branch or jal
          2'b10: PC <= PC  + 4;        //normal
          2'b11: PC <= RD1 + ImmOp;   //jalr
  endcase
end


endmodule
