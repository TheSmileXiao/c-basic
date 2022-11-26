	.data #Cominezo del segmento de datos
cad1:		.asciiz "Introduzca un número: "
cad2:		.asciiz "\nY la suma de todos los números desde el 1 hasta el introducido es: "
cad3:		.asciiz "\nEl numero introducido es: "

	.globl main #la etiqueta main es global
	
	.text #comienzo del segmento de texto (instrucciones)
	
main:
	
	#petición del entero
	li $v0, 4 #código de llamada print_string
	la $a0, cad1
	syscall
	
	#leo el entero
	li $v0, 5 #código de llamada read_int
	syscall
	
	#lo guardo en el registro $t0
	move $t0, $v0
	
	#inicializo el sumatorio en $t1
	li $t1, 0
	
	#inicializo también el indicador de iteración
	li $t2, 1
	
	#creo una etiqueta para el bucle de suma
	suma:
		add $t1, $t1, $t2
		addi $t2, $t2, 1
		beq $t2, $t0, fin
		j suma
		
	fin:
		#sumo n (no se hace en el bucle)
		add $t1, $t1, $t0
		
		#mostramos el numero introducido
		li $v0, 4
		la $a0, cad3
		syscall 
		
		li $v0, 1
		move $a0, $t0
		syscall
		
		#y mostramos también el sumatorio
		li $v0, 4
		la $a0, cad2
		syscall
		
		li $v0, 1
		move $a0, $t1
		syscall
		
	#código de llamada 'exit'
	li $v0, 10
	syscall
