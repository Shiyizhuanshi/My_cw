module control_unit #(
    parameter Width = 32
)(
    input  logic           EQ,
    input  logic [Width-1:0] instr,
    output logic           RegWrite,
    output logic           ResultSrc,
    output logic           ALUsrc,
    output logic [1:0]     PCsrc,
    output logic [2:0]     ALUctrl,
    output logic [2:0]     ImmSrc,
    output logic           Data_WE,
    output logic           PCJump

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
     7'b0110011: 

                case(funct3)
            
                3'b000: 
                    if (funct7 = 7'b0) //add 
                        begin
                            ALUctrl = 4'b0000;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end
                    else //sub
                        begin
                            ALUctrl = 4'b0001;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end                     
                            

                3'b001: //shift left logical (sll)
                    begin
                        ALUctrl = 4'b0010;
                        RegWrite = 1;
                        ImmSrc = 3'b011;
                        ALUsrc = 0;
                        PCsrc = 2'b0;
                        ResultSrc = 0;
                        Data_WE = 0;
                        PCJump = 0;
                    end

                3'b010: //set less than
                        begin
                            ALUctrl = 4'b0011;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end 
                
                3'b011: //set less than unsigned
                
                        begin
                            ALUctrl = 4'b0100;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end
                
                3'b100: //xor
                        begin
                            ALUctrl = 4'b0101;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end
                
                3'b101: 

                    if (funct7 = 7'b0) //shift right logical
                        begin
                            ALUctrl = 4'b0110;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end

                    else //shift right arithmetic
                        begin
                            ALUctrl = 4'b0111;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end
                
                3'b110: //OR
                        begin
                            ALUctrl = 4'b1000;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end
                
                3'b111:
                        begin
                            ALUctrl = 4'b1001;
                            RegWrite = 1;
                            ImmSrc = 3'b011;
                            ALUsrc = 0;
                            PCsrc = 2'b0;
                            ResultSrc = 0;
                            Data_WE = 0;
                            PCJump = 0;
                        end
                   
                    
                default:
                    begin
                        ALUctrl = instr[14:12];
                        RegWrite = 0;
                        ImmSrc = 3'b0;
                        ALUsrc = 0;
                        PCsrc = 0;
                        ResultSrc = 0;
                        Data_WE = 0;
                        PCJump = 0;
                    end
                endcase


//I type instructions

    7'b0010011:
                begin //addi
                    ALUctrl = instr[14:12];
                    RegWrite = 1;
                    ImmSrc = 3'b0;
                    ALUsrc = 1;
                    PCsrc = 2'b0;
                    ResultSrc = 0;
                    Data_WE = 0;
                end

//I-type, loading instructions
    7'b0000011: 
                case(funct3)

                3'b010:
                    begin  //load word (lw)
                        ALUctrl = instr[14:12];
                        RegWrite = 1;
                        ImmSrc = 3'b0;
                        ALUsrc = 1;
                        PCsrc = 2'b0;
                        ResultSrc = 1;
                        PCJump = 0;
                        Data_WE = 0;
                    end
                3'b001:
                    begin //load half (lh)
                        ALUctrl = instr[14:12];
                        RegWrite = ;
                        ImmSrc = ;
                        ALUsrc = ;
                        PCsrc = ;
                        ResultSrc = ;
                        PCJump = 0;
                        Data_WE = 0;
                    end
                3'b000: //load byte (lb)
                    begin
                        ALUctrl = instr[14:12];
                        RegWrite = ;
                        ImmSrc = ;
                        ALUsrc = ;
                        PCsrc = ;
                        ResultSrc = ;
                        PCJump = 0;
                        Data_WE = 0;
                    end
                endcase

// S type instructions
    7'b0100011:
                case(funct3)

                3'b010:
                    begin //store word (sw)
                        ALUctrl = instr[14:12];
                        RegWrite = 0;
                        ImmSrc = 3'b01;
                        ALUsrc = 1;
                        PCsrc = 0;
                        Data_WE = 1;
                        ResultSrc = 1;
                        PCJump = 0;

                    
                    end
                3'b001: //store half (sh)
                    begin
                        ALUctrl = instr[14:12];
                        RegWrite = ;
                        ImmSrc = ;
                        ALUsrc = 1;
                        PCsrc = ;
                        ResultSrc = ;
                        Data_WE = 1;
                        PCJump = 0;
                    end
                3'b000: //store byte (sb)
                    begin
                        ALUctrl = instr[14:12];
                        RegWrite = ;
                        ImmSrc = ;
                        ALUsrc = 1;
                        PCsrc = ;
                        ResultSrc = ;
                        Data_WE = 1;
                        PCJump = 0;
                    end
                    
                endcase

                
//B type instructions

    7'b1100011: if (funct3 == 3'b1)
                    begin //bne
                        ALUctrl = instr[14:12];
                        RegWrite = 0;
                        PCsrc = 0,~EQ;   
                        ImmSrc = 3'b10;
                        ALUsrc = 0;
                        ResultSrc = 0;
                        PCJump = 0;
                    end
                if (funct3 == 3'b0)
                    begin //beq
                        ALUctrl = instr[14:12];
                        RegWrite = 0;
                        PCsrc = 0,~EQ;   
                        ImmSrc = 3'b10;
                        ALUsrc = 0;
                        ResultSrc = 0;
                        PCJump = 0;
                    end


    7'b1101111: if //jal
                begin
                    ALUctrl = instr[14:12];
                    RegWrite = 1;
                    ImmSrc = 3'b101;
                    ALUsrc = 1;
                    PCsrc = 2'b10;
                    ResultSrc = 0;
                    PCJump = 1;
    end

    7'b1100111: //jalr
                begin
                    ALUctrl = instr[14:12];
                    RegWrite = 1; 
                    ImmSrc = 3'b101;
                    ALUsrc = 1;
                    PCsrc = 2'b11;
                    ResultSrc = 0;
                    PCJump = 1;
    end
    



    default:begin
    ALUctrl = instr[14:12];
    ImmSrc = 2'b00;
    PCsrc = 0;
    RegWrite = 0;
    ALUsrc = 0;
    ResultSrc = 0;
    Data_WE = 0;
    end

endcase



endmodule

    // Immsrc 00 for lw and addi, 01 for sw, 10 for bne 




    // begin                        // add      0110011
    // PCsrc = instr[6];            //addi      0010011
    // ALUsrc = ~instr[6];           //branch    1100011
    // ALUctrl = instr[14:12];      //          ||^ PCsrc
    // RegWrite = ~instr[6];        //          |^   not ALUsrc
    // ImmSrc = instr[6];          //          ^ not RegWrite 
    // end                          //          ALUctrl: funct3


    //ALU decoder




