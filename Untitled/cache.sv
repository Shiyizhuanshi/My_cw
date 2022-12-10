//Cache unit module
module cache_unit #(
  parameter LINE_SIZE   = 16, // size of a cache line in bytes
  parameter NUM_LINES   = 16, // number of cache lines
  parameter MEM_ADDR_W  = 32  // width of memory address in bits
) (
  input  clock,         // clock input
  input  [MEM_ADDR_W-1:0] mem_addr, // memory address input
  output reg mem_valid, // memory valid output
  output reg [LINE_SIZE*8-1:0] mem_data // memory data output
);

//Cache memory array
reg [LINE_SIZE*8-1:0] cache_mem [0:NUM_LINES-1];

//Cache tag array
reg [MEM_ADDR_W-1:0] cache_tag [0:NUM_LINES-1];

//Cache valid array
reg cache_valid [0:NUM_LINES-1];

//Cache hit flag
reg cache_hit;

//Cache index and tag signals
reg [log2(NUM_LINES)-1:0] cache_idx;
reg [MEM_ADDR_W-1:log2(NUM_LINES):0] cache_tag_sig;

//Cache lookup logic
always @(*) begin
  cache_idx = mem_addr[MEM_ADDR_W-1:log2(NUM_LINES)];
  cache_tag_sig = mem_addr[MEM_ADDR_W-1:0];
  cache_hit = 0;
  for (int i=0; i<NUM_LINES; i=i+1) begin
    if (cache_valid[i] && cache_tag[i] == cache_tag_sig) begin
      cache_hit = 1;
      break;
    end
  end
end

//Cache update logic
always @(posedge clock) begin
  if (cache_hit) begin
    //If there is a cache hit, output the data from the cache
    mem_valid <= 1;
    mem_data <= cache_mem[cache_idx];
  end else begin
    //If there is a cache miss, output the data from main memory
    mem_valid <= 0;
  end
end

//Cache write logic
always @(posedge clock) begin
  if (!cache_hit && mem_valid) begin
    //If there is a cache miss and the data is valid, update the cache
    cache_mem[cache_idx] <= mem_data;
    cache_tag[cache_idx] <= cache_tag_sig;
    cache_valid[cache_idx] <= 1;
  end
end

endmodule
