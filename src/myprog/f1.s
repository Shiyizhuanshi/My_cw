define:
    addi s0, zero, 0x10 
       # number of cycles in 1 sec

interupt:                   # waiting for trigger
    beq t0, zero, interupt      # t0 is constantly set to trigger

main:
    addi a1, zero, 0x0 
	addi a0, zero, 0x0      # initialize
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    jal ra, subroutine
    addi a0, zero, 0x0
    beq zero, zero, interupt

subroutine:
	addi t1, zero, 0x0   	# resetting t1 to 0

wait1:
	addi t1, t1, 0x1      	# add 1 to timer
    bne t1, s0, wait1        # branch back to wait if not timeout

shift:
	slli a1, a1, 0x1        # shift left
    addi a1, a1, 0x1
    addi a0, a1, 0x0        # a1 used so that the shift and add 
                            # operations are executed to a0 
                            # together, so there is not flashing
    jalr ra, ra, 0x0 
