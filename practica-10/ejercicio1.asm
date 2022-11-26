	.data #Cominezo del segmento de datos
letra:		.byte 'a'
cad1:		.asciiz "Introduzca una cadena: "
cad2:		.asciiz "\nLa cadena introducida es: "
cad3:		.asciiz "\nY su cantidad de 'a': "
cadleida:	.space 100 #reservo espacio para 100 caracteres

	.globl main #la etiqueta main es global
	
	.text #comienzo del segmento de texto (instrucciones)
	
main:
	
	#petición del entero
	li $v0, 4 #código de llamada print_string
	la $a0, cad1
	syscall
	
	#leo la cadena
	li $v0, 8
	la $a0, cadleida
	li $a1, 100
	syscall
	
	#inicializo en $t0 el puntero a la direccion de la cadena menos uno
	la $t0, cadleida
	subi $t0, $t0, 1
	
	#inicializo el contador en $t1
	li $t1, -1
	
	#traigo la letra al registro
	lb $t2, letra
	
	#creo una etiqueta para la suma
	suma:
		addi $t1, $t1, 1
		addi $t0, $t0, 1
	
	#creo un bucle que me recorra letra a letra la cadena
	bucle:
		#cargo la primera letra
		lb $t3, ($t0)
		#compruebo si ya he llegado al final de la cadena
		beq $t3, $zero, fin
		#si no, compruebo si la letra es 'a'
		beq $t3, $t2, suma
		#si tampoco, sumo uno al puntero y repito el bucle
		addi $t0, $t0, 1
		j bucle
	
	#una vez he salido...	
	fin:
		#mostramos la cadena introducida
		li $v0, 4
		la $a0, cad2
		syscall 
		
		li $v0, 4
		la $a0, cadleida
		syscall
		
		#y mostramos también el conteo de 'a'
		li $v0, 4
		la $a0, cad3
		syscall
		
		li $v0, 1
		move $a0, $t1
		syscall
		
	#código de llamada 'exit'
	li $v0, 10
	syscall
