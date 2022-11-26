.data

#####################################################

#Datos necesarios

datos1:
.half 4,7,2 
.align 2 
.word 1, -5 
.byte 4
.align 1
.half 3
.align 2
.word -3 
.space 2 
.byte 'c' 
resultado1: .asciiz "\nResultado apartado 1:"
datos2:
.byte 2,3,5,7 
resultado2: .asciiz "\nResultado apartado 2:"

#####################################################

.globl main
.text
main: #etiqueta main

#####################################################

#Apartado 1
la $t0,datos1
lw $t1,8($t0) #$t1 = 1.
lh $t2,18($t0) #$t2 = 2.
add $t3,$t1,$t2 #suma
sh $t3,24($t0) #colocarlo en .space 2

####################################################

#se muestra por pantalla el mensaje de resultado
 li $v0,4
 la $a0,resultado1
 syscall
 
####################################################

#Muestra el resultado
 li $v0,1
 move $a0,$t3
 syscall

#####################################################

#Apartado 2
la $t0,datos2
lb $t1,-1($t0) #$t1 = 'c'
addi $t1,$t1,2 #$t1 = 'e'
sb $t1,-11($t0)

####################################################

#se muestra por pantalla el mensaje de resultado
 li $v0,4
 la $a0,resultado2
 syscall
 
####################################################
 
#Muestra el resultado
 li $v0,1
 move $a0,$t1
 syscall