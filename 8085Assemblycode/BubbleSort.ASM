START: LXI H,2050
       MVI D,00
       MOV C,M
       INX H
       DCR C
LOOP:  MOV A,M
       INX H
       CMP M
       JC NEXTBYTE
       MOV B,M
       MOV M,A
       DCX H
       MOV M,B
       INX H
       MVI D,01
NEXTBYTE: DCR C
       JNZ LOOP
       MOV A,D
       CPI 01H
       JZ START
       HLT
