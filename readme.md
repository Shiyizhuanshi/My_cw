# This is the repo for Single-cycle cpu

---
#### Things to do:

- [x] Design a basic cpu structure (Lab4)

- [x] Design and test JAL and JALR

- [ ] Implement Lab3 in our cpu 
- [ ] Design cpu to implement R-Type instruction
- [ ] Design cpu to implement I-Type instruction
- [ ] Design cpu to implement S-Type instruction
- [ ] Design cpu to implement B-Type instruction
- [ ] Design cpu to implement U-Type instruction
- [ ] Design cpu to implement J-Type instruction
- [ ] Modify the CPU to work under PIPELINE
- [ ] Design cache for cpu
- [ ] Design bus for cpu
- [ ] software for f1

---

#### Contents:

[Background](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-4#background)

[Main goals](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-4#main-goals)

[Control Unit](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-4#control-unit)

[ALU](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-4#alu)

[SignExtension](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-4#signextension)

[RegisterFile](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-4#registerfile)


##### Background 

RISC-V has six types of instruction in total, they look like below:

<img width="980" alt="image" src="https://user-images.githubusercontent.com/100481494/202711466-7f65dcc5-bfb9-4e0a-81c8-e62fcbe05be8.png">


opcode
: Define the type of instruction

funct3 & funct7
: These two fields combined with opcode to determine what operation should be implemented 

rs1 & rs2
: Adress of register

rd
: Address of destination register

imm
: Constant value in instructions

---

#### Main goals

Here below are the instructions we need to implement for our cpu:

##### R-Type

![image](https://user-images.githubusercontent.com/100481494/204165782-1fe59283-6ea0-4af5-be5f-f4643ab7e744.png)

##### I & S-Type

![image](https://user-images.githubusercontent.com/100481494/204165825-e5da5872-dd44-4041-ba5e-5756faae755b.png)

##### B-Type

![image](https://user-images.githubusercontent.com/100481494/204165857-76714043-c690-40ba-be09-c8b0dbae533a.png)

##### U & I-Type
![image](https://user-images.githubusercontent.com/100481494/204165885-30856d47-987e-4807-84f0-b951cbd67e1b.png)

---


#### Control Unit

Control unit generates control signal to all other blocks, so in order to implement all the instructions, the first step should be fully understanding and specifying what control signal should be genrated under different operations.

###### Control signal 

| Name | PCSrc | ResultSrc | ImmSrc | ALUSrc | ALUctrl | MemWrite | RegWrite | DataCtrl | PCJump |
|-----:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Length | 2 | 1 | 3 | 1 | 4 | 1 | 1 | 3 | 1 |

**PCSrc**
: To implement JAL and JALR we need to extend PCSrc to 2 bits. 
The 0 bit controls jump/branch or not: high for jump/branch, low for normal increment.
The 1 bit controls where PC should jumps to: high for JALR, low for JAL and braches.

**ALUsrc**
: Controls ALU Multiplexer, High if using immediate, Low if using Register File Read 2

**ResultSrc**
: Controls whether the Register File Write uses the result from ALU (Low) or Data Memory (High)

**ImmSrc**
: We have six types of instructions, so ImmSrc should be 3-bit, including up to 8 types.

**ALUctrl**
: For R-Type instruciton, we have ten kinds of ALU operations, thus ALUControl should be 4-bit.[Definitions](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-4/blob/main/readme.md#defining-aluctrl)

**DataCtrl**
: DataCtrl should be 2-bit as there are three kinds of operations in datamemory: byte, half, word.

**PCJump**
: This signal basically control the source of WD3: high for result, low for current PC + 4.

**DataCtrl**
: This 3-bit signal controls what goes in and out from the data memory.

| value | 000 | 001 | 010 | 101 | 110 |
|-----:|:---:|:---:|:---:|:---:|:---:|
| Meaning | word | half | byte | unsigned half | unsigned byte |

While designing the cpu, we should strictly name all the variales as same as in this file.

---


#### ALU

This is almost the most complicated module in our cpu.
It not only needs to do ten kinds of arithmetric operations but also needs to generates 3 inputs to the [Control Unit](https://github.com/Shiyizhuanshi/My_Lab4#control-unit) 


##### ALU operations 


##### ALU output signal 

| Signal Name | EQ | Less | Sign |
|-----:|:---:|:---:|:---:|
| Purpose | beq & bne | blt & bge | bltu & bgeu |
| Meaning | true for equal | true for less | true for unsign |

#### Defining ALUctrl

| ALUctrl | Instruction |
|-----:|:---:|
| 0000 | Add |
| 0001 | Sub |
| 0010 | Shift Left Logical | 
| 0011 | Set Less Than |
| 0100 | Set Less Than Unsigned | 
| 0101 | XOR | 
| 0110 | Shift Right Logical |
| 0111 | Shift Right Arithmetic | 
| 1000 | OR | 
| 1001 | AND |
| 1111 | LUI |


#### SignExtension

This unit takes certain fields from instructions as ImmOp and sign extend it. 
As we have in total six types of instructions, thus ImmSrc has to be 3-bit.

| ImmSrc | 000 | 001 | 010 | 011 | 100 | 101 |
|-----:|:---:|:---:|:---:|:---:|:---:|:---:|
| Type | I | S | B | R | U | J |

There should be two more situations which are unsigned extension and zero extension.



### RegisterFile

#### The CPU Pipeline

![image](https://user-images.githubusercontent.com/105641599/206207813-477bebaa-9af5-401b-be76-cde22e914e19.png)

To achieve the pipelined processor, we must add clocked registers inbetween the five states
- Fetch
- Decode
- Execute
- Memory
- Writeback

The register file is written back on the falling edge of the clock, to allow data be written in the first half cycle and read back in the second half cycle. At each stage, the registers will have different Program Counter Values. We must append the letter F, D, E, M, W to the PC to distinguish where the signal is.

We will use the same control unit as in the basic single cycle microarchitecture, ensuring that the control signals arrive at the same time as the datapath.

Hazards?

We will avoid Hazards through software implementation by using NOPs where needed.






### Assembly Code
```
define:
    addi s0, zero, 0x50     # number of cycles in 1 sec

interupt:                   # waiting for trigger
    bne t0, zero, main      # t0 is constantly set to trigger
    beq zero, zero, interupt  

main:
	addi a0, zero, 0x0      # initialize
    addi a1, zero, 0x0
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    beq zero, zero, interupt

subroutine:
	addi t1, zero, 0x0   	# resetting t1 to 0

wait:
	addi t1, t1, 0x1      	# add 1 to timer
    bne t1, s0, wait        # branch back to wait if not timeout

shift:
	slli a1, a1, 0x1        # shift left
    addi a1, zero, 0x1
    addi a0, a1, 0x0        # a1 used so that the shift and add 
                            # operations are executed to a0 
                            # together, so there is not flashing
    jalr ra, ra, 0x0 
```
    







