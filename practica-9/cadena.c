#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[]){	

	if (argc < 3)
	{
		printf("Error\n");
		return -1;
	}

	char *cadena1;
	int longitud;

	cadena1 = (char*)malloc(sizeof(char) * 100);

	printf("Introduce la cadena (maximo de 100 caracteres)\n");
	fgets(cadena1, 100, stdin);	

	longitud = strlen(cadena1);
	printf("La longitud de la cadena es: %d\n", longitud);

	strcat(cadena1, "Cadena añadida");
	printf("%s\n", cadena1);

	if (strstr(cadena1,argv[1])==NULL)
	{
		printf("No se encontro la cadena argumento en la cadena introducida por teclado\n");
	}
	else{
		printf("Si se encontro la cadena argumento en la cadena introducida por teclado\n");
	}

	int num = atoi(argv[2]);
	char caracter;

	caracter = cadena1[num];
	printf("El caracter en la posicion %d como argumento es %c\n", num, caracter);

	free(cadena);
	
	return 0;

}
