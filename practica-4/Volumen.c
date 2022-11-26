#include <stdio.h>
//Función principal del programa

float volumenCono(float radio, float altura);
float volumenOrtoedro(float lado1, float lado2, float altura);
int main (){

	int opcion;
	float volumen, radio, lado1, lado2, alturac,alturao;
	inicio:
	printf("Elige opcion:\n 1-Volumen de un cono. \n 2-Volumen de un ortoedro. \n 3-Salir \n");

	scanf("%d", &opcion); 

	if(opcion == 1){

		printf("Introduzca el radio de la base del cono: ");
		scanf("%f", &radio);
		printf("Introduzca la altura del cono: ");
		scanf("%f", &alturac);
		volumen = volumenCono(radio,alturac);
		printf("El volumen del cono es: %f \n",volumen);
		goto inicio;

	}else if(opcion == 2){

		printf("Introduzca un lado de la base del ortoedro: ");
		scanf("%f", &lado1);
		printf("Introduzca otro lado de la base del ortoedro: ");
		scanf("%f", &lado2);
		printf("Introduzca la altura del ortoedro: ");
		scanf("%f", &alturao);
		volumen = volumenOrtoedro(lado1,lado2,alturao);
		printf("El volumen del ortoedro es: %f \n",volumen);
		goto inicio;

	}else if(opcion == 3) {
		printf("Saliendo \n");
		
	}else{
		printf("Opcion no valida\n");
		goto inicio;
	}


	//Fin del programa

	return 0;
}
float volumenCono(float radio, float altura){
	float resultado;
	float pi = 3.14159265359;
	resultado = (pi*radio*radio*altura)/3;
	return resultado;
}
float volumenOrtoedro(float lado1, float lado2, float altura){
	float resultado;
	resultado = lado1*lado2*altura;
	return resultado;
}
