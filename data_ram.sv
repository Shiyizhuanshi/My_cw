module data_ram #(
    parameter WIDTH = 32
)(
    input  logic               clk,
    input  logic               Data_WE,
    input  logic  [2:0]        DataCtrl,
    input  logic  [WIDTH -1:0] Data_addr,
    input  logic  [WIDTH -1:0] Data_WD,
    output logic  [WIDTH -1:0] Data_RD
);


logic [7:0] data_mem [32'h00001FFF:32'h00000100];
logic [WIDTH-1:0] internal_Data_RD;

assign internal_Data_RD <= {data_mem[Data_addr+3], data_mem[Data_addr+2], data_mem[Data_addr+1], data_mem[Data_addr]};


initial begin
        $display("Loading Data_mem.");
        $readmemh("data.mem", data_mem);
end;

always_comb begin
    case(DataCtrl)
    3'b000:  Data_RD <= internal_Data_RD;  //word
    3'b001:  Data_RD <= {16{internal_Data_RD[15]}, internal_Data_RD[15:0]};  //half
    3'b010:  Data_RD <= {24{internal_Data_RD[7]}, internal_Data_RD[7:0]};  //byte
    3'b101:  Data_RD <= {16{1'b0}, internal_Data_RD[15:0]};  //uhalf
    3'b110:  Data_RD <= {24{1'b0}, internal_Data_RD[7:0]};  //ubyte lbu
    default: Data_RD <= internal_Data_RD;
    endcase
end

always_ff @(posedge clk)
    if (Data_WE) 
        case(DataCtrl)

        3'b000: begin //word
        data_mem[Data_addr+3] = internal_Data_WD[31:24];
        data_mem[Data_addr+2] = internal_Data_WD[23:16];
        data_mem[Data_addr+1] = internal_Data_WD[15:8];
        data_mem[Data_addr] = internal_Data_WD[7:0];
        end

        3'b001:begin  //half
        data_mem[Data_addr+1] = Data_WD[15:8];
        data_mem[Data_addr] = Data_WD[7:0];
        end

        3'b010:  //byte sb
        data_mem[Data_addr] = Data_WD[7:0];

        default:begin
        data_mem[Data_addr+3] = internal_Data_WD[31:24];
        data_mem[Data_addr+2] = internal_Data_WD[23:16];
        data_mem[Data_addr+1] = internal_Data_WD[15:8];
        data_mem[Data_addr] = internal_Data_WD[7:0];
        end

        endcase

endmodule
