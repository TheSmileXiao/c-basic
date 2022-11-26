#include <stdio.h>
#include <stdlib.h> 
void build(int x[][6]);
void suma(int x[][6], int y[6]);
int main ()
{
	srand(time(NULL));
	int matriz[6][6];
	int final[6];
	build(matriz);
	suma(matriz,final);
	//Fin del programa

	printf("Matriz original:\n");
	for (int i=0; i<3; ++i){
      		for (int j=0; j<6; ++j){
           		printf("%d ",matriz[i][j]);
          	}
      		printf("\n");
     	}
	
	printf("Vector suma:\n");
	for (int i=0; i<6; ++i){
           	printf("%d ",final[i]);
          	
     	}
	printf("\n");
	return 0;
}

void build(int x[][6]){
	for (int i=0;i<3;i++){
		for (int j=0;j<6;j++){
			x[i][j]=(rand() %9)+1;
		}
	}
}

void suma(int x[][6], int y[6]){
	for (int i=0;i<6;i++){
		y[i]=x[0][i]+x[1][i]+x[2][i];
	}
}
