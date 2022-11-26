#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inicializamatriz(int filas,int columnas, int *p);
void minimoFilas(int filas, int columnas, int *p, int *m);

int main(){
    int filas, columnas, *matriz, *minFilas;

    srand(time(NULL));

    printf("Indroduce filas de la matriz: ");
    scanf("%d",&filas);
    printf("Indroduce columnas de la matriz: ");
    scanf("%d",&columnas);

    matriz=(int*) malloc(sizeof(int)*filas*columnas);
    minFilas=(int*) malloc(sizeof(int)*filas);

    inicializamatriz(filas, columnas, matriz);
    minimoFilas(filas,columnas,matriz,minFilas);

    printf("\nla matriz %d x %d : ",filas,columnas);

    for(int i=0; i<filas; i++){
        printf("\nfila %d :",i+1);
        for(int j=0; j<columnas; j++)
            printf("\t%d",*(matriz+i*columnas+j));
    }

    printf("\n\n");

    for(int i=0; i<filas; i++)
        printf("el numero mas pequenio de la fila %d es : %d\n",i+1,*(minFilas+i));


    free(matriz);
    free(minFilas);

    return 0;
}

void inicializamatriz(int filas,int columnas, int *p){

    for(int i=0; i<filas; i++)
        for(int j=0; j<columnas; j++)
            *(p+i*columnas+j)=rand()%21 -10; //0-20 >> -10-10 
    return;

}
void minimoFilas(int filas, int columnas, int *p, int *m){

    for(int i=0; i<filas; i++)
        *(m+i)=10;

    for(int i=0; i<filas; i++)
        for(int j=0; j<columnas; j++)            
            if( *(m+i) > *(p+i*columnas+j))
                *(m+i) = *(p+i*columnas+j);
    
    return;
}