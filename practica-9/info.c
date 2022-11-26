#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 100
#define MAX_LINEAS 5

void leer(FILE *archivo, char m[MAX_LINEAS][MAX_CHAR]);
void letraNombre(char letra, char m[MAX_LINEAS][MAX_CHAR]);
void imprimir(char m[MAX_LINEAS][MAX_CHAR]);

int main(int argc, char const *argv[]){
	
	FILE *archivo;
	char p[MAX_LINEAS][MAX_CHAR];
	char letra;

	archivo = fopen("info.txt", "r");

	if (archivo == NULL){
		printf("No se puede abrir el archivo\n");
		exit(EXIT_FAILURE);
	}else{
		leer(archivo, p);
		printf("Introduce la inicial de un nombre en Mayuscula\n");
		scanf("%c", &letra);
		letraNombre(letra, p);
		imprimir(p);
		}


	return 0;
}

void leer(FILE *archivo,char m[MAX_LINEAS][MAX_CHAR]){
	char *lineas;
	int i = 0;
	size_t bytes;
	size_t tam;

	do{
		bytes=getline(&lineas,&tam,archivo);

		if (bytes != -1){
			strncpy(m[i],lineas,bytes-1);
			m[i][bytes-1]= '\0';
			i++;
			}

	}while(bytes!=-1);

	free(lineas);
	fclose(archivo);
}

void letraNombre(char letra,char m[MAX_LINEAS][MAX_CHAR]){

	int buscar=0;
	
	for (int i=0;i<MAX_LINEAS;i++){
		if (m[i][0]==letra){
			printf("%s\n",m[i]);
			buscar = 1;
			}
		}

	if (buscar== 0){
		printf("Ningun nombre con esa inicial\n");
		}

	printf("\n");

}
void imprimir(char m[MAX_LINEAS][MAX_CHAR]){

	for(int i=0;i<MAX_LINEAS;i++){
		
			printf("%s\n",m[i]);
		
	}
	printf("\n");

}
