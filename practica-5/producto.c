#include <stdio.h>
#include <stdlib.h> 
void build(int x[][3]);
void producto(int x[][3], int y[][3], int z[][3]);
void imprimirMatriz(int x[][3]);
int main ()
{
	srand(time(NULL));
	int matriz[3][3];
	int matriz2[3][3];
	int final[3][3];
	build(matriz);
	build(matriz2);
	producto(matriz,matriz2,final);
	//Fin del programa

	printf("Matriz original 1:\n");
	imprimirMatriz(matriz);

	printf("Matriz original 2:\n");
	imprimirMatriz(matriz2);
	
	printf("Matriz producto:\n");
	imprimirMatriz(final);
	return 0;
}

void build(int x[][3]){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			x[i][j]=(rand() %5)+1;
		}
	}
}

void producto(int x[][3], int y[][3], int z[][3]){

	z[0][0]=x[0][0]*y[0][0]+x[0][1]*y[1][0]+x[0][2]*y[2][0];
	z[0][1]=x[0][0]*y[0][1]+x[0][1]*y[1][1]+x[0][2]*y[2][1];
	z[0][2]=x[0][0]*y[0][2]+x[0][1]*y[1][2]+x[0][2]*y[2][2];
	z[1][0]=x[1][0]*y[0][0]+x[1][1]*y[1][0]+x[1][2]*y[2][0];
	z[1][1]=x[1][0]*y[0][1]+x[1][1]*y[1][1]+x[1][2]*y[2][1];
	z[1][2]=x[1][0]*y[0][2]+x[1][1]*y[1][2]+x[1][2]*y[2][2];
	z[2][0]=x[2][0]*y[0][0]+x[2][1]*y[1][0]+x[2][2]*y[2][0];
	z[2][1]=x[2][0]*y[0][1]+x[2][1]*y[1][1]+x[2][2]*y[2][1];
	z[2][2]=x[2][0]*y[0][2]+x[2][1]*y[1][2]+x[2][2]*y[2][2];
	

}

void imprimirMatriz(int x[][3]){
	for (int i=0; i<3; ++i){
      		for (int j=0; j<3; ++j){
           		printf("%d ",x[i][j]);
          	}
      		printf("\n");
     	}	
}
