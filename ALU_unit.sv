module ALU_unit #(
    parameter WIDTH = 32
)(
    input   logic [WIDTH-1:0] ALUop1,
    input   logic [WIDTH-1:0] RegOp2,
    input   logic [WIDTH-1:0] ImmOp,
    output  logic [WIDTH-1:0] ALUout,
    input   logic [3:0]       ALUctrl,
    input   logic             ALUsrc,
    output  logic             EQ
);

logic [WIDTH-1:0] ALUop2;

always_comb begin
    ALUop2 = ALUsrc ? ImmOp : RegOp2; 
    case (ALUctrl)
        4'b0000: ALUout = ALUop1 + ALUop2;
        4'b0001: ALUout = ALUop1 - ALUop2;
        4'b0010: ALUout = ALUop1 << ALUop2[4:0];
        4'b0011: 
            if ( ~ALUop1[31] & ~ ALUop2[31])
                ALUout <= (ALUop1[30:0] < ALUop2[30:0]);
            else if (ALUop1[31] & ~ ALUop2[31])
                ALUout <= 32'b1;
            else if (~ALUop1[31] & ALUop2[31])
                ALUout <= 32'b0;
            else
                ALUout <= (ALUop1[30:0] > ALUop2[30:0]);
        4'b0100: ALUout = (ALUop1 < ALUop2);
        4'b0101: ALUout = ALUop1 | ALUop2;
        4'b0110: ALUout = ALUop1 >> ALUop2[4:0];
        4'b0111: ALUout = ALUop1 >>> ALUop2[4:0];
        4'b1000: ALUout = ALUop1 | ALUop2;
        4'b1001: ALUout = ALUop1 & ALUop2;
        4'b1111: ALUout = ALUop2;
    endcase
    EQ = (ALUop1 == ALUop2);
end
endmodule
