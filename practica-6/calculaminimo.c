#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inicializamatriz(int n,int m, int *matriz);
int calculaminimo(int n, int m, int *matriz);

int main(){
    int n, m, *matriz, minimo;

    srand(time(NULL));

    printf("Indroduce filas de la matriz: ");
    scanf("%d",&n);
    printf("Indroduce columnas de la matriz: ");
    scanf("%d",&m);

    matriz=(int*) malloc(sizeof(int)*n*m);
    inicializamatriz(n, m, matriz);
    minimo=calculaminimo(n,m,matriz);

    printf("El numero menor de la matriz %d x %d : ",n,m);

    for(int i=0; i<n; i++){
                printf("\n");
        for(int j=0; j<m; j++)
            printf("\t%d",*(matriz+i*m+j));

    }

    printf("\nes: %d\n",minimo);

    free(matriz);
    return 0;
}

void inicializamatriz(int n,int m, int *matriz){

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            *(matriz+i*m+j)=rand()%10+1;
    return;

}
int calculaminimo(int n, int m, int *matriz){

    int minimo=10;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(minimo > *(matriz+i*m+j))
                minimo = *(matriz+i*m+j);
    
    return minimo;
}