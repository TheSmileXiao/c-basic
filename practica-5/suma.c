#include <stdio.h>
#include <stdlib.h> 
void build(int x[][6]);
int suma(int x[][6]);
int main ()
{
	srand(time(NULL));
	int matriz[6][6];
	build(matriz);
	//Fin del programa

	for (int i=0; i<6; ++i){
      		for (int j=0; j<6; ++j){
           		printf("%d ",matriz[i][j]);
          	}
      		printf("\n");
     	}

	printf("%d\n",suma(matriz));
	return 0;
}

void build(int x[][6]){
	for (int i=0;i<6;i++){
		for (int j=0;j<6;j++){
			x[i][j]=(rand() %9)+1;
		}
	}
}

int suma(int x[][6]){
	int total;
	for (int i=0;i<6;i++){
		for (int j=0;j<6;j++){
			total+=x[i][j];
		}
	}
	return total;
}
