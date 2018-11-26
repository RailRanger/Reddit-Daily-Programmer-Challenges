#PROGRAM Game of Threes 

.data
	prompt: .asciiz "Enter starting num: "
	message: .asciiz "\n You entered "
	space: .asciiz " "
	newline: .asciiz "\n"

.text
#t0 = original number	
#t1 = original number but gets divided by 3
#t2 = the remainder when t1 is divided by 3
#t3 = x, which is the amount to be lowered



main:
#Prompt to enter num"
li $v0, 4
la $a0, prompt
syscall

#Get input
li $v0, 5
syscall

move $t0, $v0 #Store starting input to $t0
move $t1, $t0

loopstart:
beq $t1, 1, exit #if x==1 , goto exit
remu $t2, $t1, 3 #store remainder in t2, 

bne $t2, 0, remcheck1	#if rem==0, else go to remcheck1
jal printT1 #print number before division
jal printSpace
add $t3, $0, $0 #store to x, the amount to be lowered or in this case 0
jal printX 
jal printLine
divu $t1, $t1, 3 
j loopstart

remcheck1:
bne $t2, 1, remcheck2 #if rem==1, else go to remcheck2
jal printT1
jal printSpace
add $t3, $0, $0
addi $t3, $t3, -1
jal printX
jal printLine
addi $t1, $t1, -1	
divu $t1, $t1, 3	
j loopstart

remcheck2:
jal printT1
jal printSpace
add $t3, $0, $0
addi $t3, $t3, 1
jal printX
jal printLine
addi $t1, $t1, 1
divu $t1, $t1, 3
j loopstart


printT1:
li $v0, 1
move $a0, $t1
syscall
jr $ra

printX:
li $v0, 1
move $a0, $t3
syscall
jr $ra

printSpace:
li $v0 ,4
la $a0, space
syscall
jr $ra

printLine:
li $v0, 4
la $a0, newline
syscall
jr $ra

exit: 
li $v0, 1
addi $a0, $0, 1
syscall
