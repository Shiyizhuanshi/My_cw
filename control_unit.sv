
module control_unit #(
    parameter Width = 32
)(
    input  logic             EQ,
    input  logic [Width-1:0] instr,
    output logic             RegWrite,
    output logic             ResultSrc,
    output logic             ALUsrc,
    output logic [1:0]       PCsrc,
    output logic [3:0]       ALUctrl,
    output logic [2:0]       ImmSrc,
    output logic             Data_WE,
    output logic [2:0]       DataCtrl,
    output logic             PCJump
);

logic [2:0] funct3;
logic [6:0] funct7;
logic [6:0] opcode;

assign funct3 = instr[14:12];
assign funct7 = instr[31:25];
assign opcode = instr[6:0];

always_comb

case(opcode)

//R-type instructions
    7'b0110011: begin
        case(funct3)
            3'b000:   ALUctrl = {3'b000, funct7[6]}; //add and sub      
            3'b001:   ALUctrl = 4'b0010;             //shift left logical (sll)
            3'b010:   ALUctrl = 4'b0011;             //set less than
            3'b011:   ALUctrl = 4'b0100;             //set less than unsigned
            3'b100:   ALUctrl = 4'b0101;             //xor
            3'b101:   ALUctrl = {3'b011, funct7[6]}; //shift right logical or arithmetic
            3'b110:   ALUctrl = 4'b1000;             //OR
            3'b111:   ALUctrl = 4'b1001;             //AND
            default:  ALUctrl = 4'b0000;             //add
        endcase
        RegWrite  = 1;
        ImmSrc    = 3'b011;
        ALUsrc    = 0;
        PCsrc     = 2'b00;
        ResultSrc = 0;
        Data_WE   = 0;
        PCJump    = 0;
        DataCtrl  = 3'b000;
    end    
                


//I type instructions

    7'b0010011: begin //addi and slli
        ALUctrl   = {2'b00, funct3[0], 1'b0};
        RegWrite  = 1;
        ImmSrc    = 3'b000;
        ALUsrc    = 1;
        PCsrc     = 2'b00;
        ResultSrc = 0;
        Data_WE   = 0;
        PCJump    = 0;
        DataCtrl  = 3'b000;
    end

//I-type, loading instructions
    7'b0000011: begin      //only load word
        case(funct3)
            3'b000: DataCtrl = 3'b010 //load byte
            3'b001: DataCtrl = 3'b001 //load half
            3'b010: DataCtrl = 3'b000 //load word
            3'b100: DataCtrl = 3'b110 //load byte unsigned
            3'b101: DataCtrl = 3'b101 //load half unsigned
        endcase
        ALUctrl   = 4'b0000;
        RegWrite  = 1;
        ImmSrc    = 3'b000;
        ALUsrc    = 1;
        PCsrc     = 2'b00;
        ResultSrc = 1;
        PCJump    = 0;
        Data_WE   = 0;
    end
// S type instructions
    7'b0100011:begin       //only store word
        case(funct3)
            3'b000: DataCtrl = 3'b010 //store byte
            3'b001: DataCtrl = 3'b001 //store half
            3'b010: DataCtrl = 3'b000 //store word
        endcase
        ALUctrl   = 4'b0000;
        RegWrite  = 0;
        ImmSrc    = 3'b001;
        ALUsrc    = 1;
        PCsrc     = 2'b00;
        Data_WE   = 1;
        ResultSrc = 1;
        PCJump    = 0;
    end

                
//B type instructions

    7'b1100011: begin //beq & bne
        PCsrc     = {0, funct3[0] ^ EQ};
        ALUctrl   = 4'b0000;
        RegWrite  = 0; 
        ImmSrc    = 3'b010;
        ALUsrc    = 0;
        ResultSrc = 0;
        PCJump    = 0;
        DataCtrl  = 3'b000;
    end

    7'b1101111: begin //jal
        ALUctrl   = 4'b0000;
        RegWrite  = 1;
        ImmSrc    = 3'b101;
        ALUsrc    = 1;
        PCsrc     = 2'b01;
        ResultSrc = 0;
        PCJump    = 1;
        DataCtrl  = 3'b000;
                
    end

    7'b1100111: begin //jalr
        ALUctrl   = 4'b0000;
        RegWrite  = 1; 
        ImmSrc    = 3'b000;
        ALUsrc    = 1;
        PCsrc     = 2'b11;
        ResultSrc = 0;
        PCJump    = 1;
        DataCtrl  = 3'b000;
    end

//U type instruction
    7'b0110111: begin  //lui 
        ALUctrl = 4'b1111;
        RegWrite = 1'b1; 
        ImmSrc = 3'b100;
        ALUsrc = 1;
        PCsrc = 2'b00;
        ResultSrc = 0;
        PCJump = 1'b0;
        DataCtrl  = 3'b000;
    end
    
    default:begin
    ALUctrl   = 4'b0000;
    ImmSrc    = 3'b000;
    PCsrc     = 2'b00;
    RegWrite  = 0;
    ALUsrc    = 0;
    ResultSrc = 0;
    Data_WE   = 0;
    DataCtrl  = 3'b000;
    end

endcase

endmodule