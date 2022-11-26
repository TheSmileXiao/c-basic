#include <stdio.h>
#include <stdlib.h> 
void build(int x[][5]);
int main ()
{
	srand(time(NULL));
	int matriz[5][5];
	build(matriz);
	//Fin del programa

	for (int i=0; i<5; ++i){
      		for (int j=0; j<5; ++j){
           		printf("%d ",matriz[i][j]);
          	}
      		printf("\n");
     	}
	return 0;
}

void build(int x[][5]){
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			x[i][j]=(rand() %12)+3;
		}
	}
}
