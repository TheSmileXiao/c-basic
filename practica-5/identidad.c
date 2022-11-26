#include <stdio.h>
#include <stdlib.h> 
void identidad(int x[][9]);
int main ()
{
	
	int ident[9][9];
	identidad(ident);
	//Fin del programa

	 for (int i=0; i<9; ++i){
      		for (int j=0; j<9; ++j){
           		printf("%d ",ident[i][j]);
          	}
      		printf("\n");
     	}
	return 0;
}

void identidad(int x[][9]){
	for (int i=0;i<9;i++){
		for (int j=0;j<9;j++){
			if (i==j){
				x[i][j]=1;			
			}else{
				x[i][j]=0;			
			}
		}
	}
}
