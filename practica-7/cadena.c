#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitaespacios(char *cadena, char *cadenasin);

int main(){

	char *cadena, *cadenasin;
	int longitud;

	printf("Introduzca la longitud de la cadena\n");
	scanf("%d", &longitud);

	cadena = (char*) malloc(sizeof(char) * longitud);
	cadenasin = (char*) malloc(sizeof(char) * longitud);

	printf("Introduzca una cadena\n");
	fgets(cadena, 100, stdin);
	fgets(cadena, longitud, stdin);

	quitaespacios(cadena, cadenasin);

    printf("La cadena original es :\n%s",cadena);
	printf("La cadena sin espacio es :\n%s", cadenasin);

	free(cadena);
	free(cadenasin);

	return 0;
}

void quitaespacios(char *cadena, char *cadenasin){
 
	int i , j = 0;
	for (i = 0; i < strlen(cadena); i++){

		if (cadena[i] != ' '){
			cadenasin[j++] = cadena[i];
		}
	}
    
    return;
}