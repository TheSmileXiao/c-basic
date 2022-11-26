#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inicializamatriz(int tam, int *matirz);
void multiplica(int *a, int *b, int *c, int tam);

int main(){
    int tam, *matrizA, *matrizB, *matrizC;

    srand(time(NULL));

    printf("Indroduce el tamanio de la matriz: ");
    scanf("%d",&tam);

    matrizA=(int*) malloc(sizeof(int)*tam*tam);
    matrizB=(int*) malloc(sizeof(int)*tam*tam);
    matrizC=(int*) malloc(sizeof(int)*tam*tam);
    inicializamatriz(tam, matrizA);
    inicializamatriz(tam, matrizB);
    multiplica(matrizA, matrizB, matrizC, tam);

    printf("el producto de la matriz A:\n");
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++)
            printf("\t%d",*(matrizA+i*tam+j));

        printf("\n");
    }

    printf("Y la matriz B:\n");
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++)
            printf("\t%d",*(matrizB+i*tam+j));

        printf("\n");
    }

    printf("es:\n");
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++)
            printf("\t%d",*(matrizC+i*tam+j));

        printf("\n");
    }

    free(matrizA);
    free(matrizB);
    free(matrizC);
    return 0;
}

void inicializamatriz(int tam, int *matriz){

    for(int i=0; i<tam; i++)
        for(int j=0; j<tam; j++)
            *(matriz+i*tam+j)=rand()%10+1;
    return;

}

void multiplica(int *a, int *b, int *c, int tam){

    for(int i=0; i<tam; i++)
        for(int j=0; j<tam; j++)
            for(int k=0; k<tam;k++)
                *(c+i*tam+j) += *(a+i*tam+k) * *(b+k*tam+j);


    return;
}