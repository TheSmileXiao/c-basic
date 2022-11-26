//Para compilar usar gcc -o prueba potenciaPositiva.c -lm
#include <stdio.h>
#include <math.h>
//Función principal del programa
int potencia(int base,int exponente);
int main (){

	int numero1,numero2,fin;
	

	printf("Escribe el primer numero: ");

	scanf("%d", &numero1); 

	printf("Escribe un segundo numero: ");

	scanf("%d", &numero2);

	if (0 < numero1 && 0 < numero2){
		int base, exponente;

		printf("Introduzca la base: ");

		scanf("%d", &base); 

		printf("Introduzca el exponente: ");

		scanf("%d", &exponente);
		fin= potencia(base,exponente);
		printf("el resultado de elevar %d a %d es: %d",base,exponente,fin);
	}else{

		printf("Los numeros tienen que ser positivos");
	}

	//Fin del programa

	return 0;
}
int potencia(int base,int exponente){
	int resultado;
	
	resultado = pow(base,exponente);
	return resultado;
	
}
