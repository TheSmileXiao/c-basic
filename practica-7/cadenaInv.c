#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invierte();

int main(){
	
    char *cadenaOrigen , *cadenaDestino;


	cadenaOrigen = (char*)malloc(sizeof(char)*100);
	cadenaDestino = (char*)malloc(sizeof(char)*100);

	printf("Introduzca una cadena\n");
	fgets(cadenaOrigen, 100, stdin);
	
    printf("Cadena original es :\n%s\n", cadenaOrigen);
	
    invierte(cadenaOrigen, cadenaDestino);

	printf("Cadena inversa es :\n");
	printf("%s\n", cadenaDestino);

	free(cadenaDestino);
	free(cadenaOrigen);

	return 0;
}

void invierte(char *cadenaOrigen, char *cadenaDestino){
 
	int j = strlen(cadenaOrigen);
	for (int i = 0; i < strlen(cadenaOrigen) ; i++){
			*(cadenaDestino+(j-1)) = *(cadenaOrigen+i);
			j--;
	}
	return;
}
