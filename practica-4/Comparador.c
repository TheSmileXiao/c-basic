#include <stdio.h>
//Función principal del programa
void pares(int numero1,int numero2);
int main (){

	int numero1,numero2,fin;
	

	printf("Escribe el primer numero: ");

	scanf("%d", &numero1); 

	printf("Escribe un segundo numero: ");

	scanf("%d", &numero2);

	if (numero2 < numero1){
		pares(numero1,numero2);
		
	
	}else{

		printf("El primer numero debe ser mayor que el segundo \n");
	}

	//Fin del programa

	return 0;
}
void pares(int numero1,int numero2){
	int resultado;
	for(int i = numero2; i <= numero1; i++){
		
		if(i%2==0){

			printf("%d\t",i);
			
			
		}
		
	}
	
}
