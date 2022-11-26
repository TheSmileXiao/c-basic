#include<stdio.h>
#include<stdlib.h>

int calculamaximo(int numero ,int *p);

int main(){

    int maximo,*puntero,numero;
    printf("Introduce el numero de los digitos que quieres meter: ");
    scanf("%d", &numero);

    puntero = (int*) malloc( sizeof(int)*numero );

    for(int i=0; i<numero;i++)
        scanf("%d", puntero+i);

    maximo=calculamaximo(numero, puntero);


    printf("Los numeros que has introducidos son :");
    for(int i=0; i<numero;i++)
        printf("\t%d",*(puntero+i));

    printf("\nEl numero mayor que has introducido es : %d \n" ,maximo);

    free(puntero);

    return 0;
}


int calculamaximo(int numero,int *p){

    int maximo=0;

    for(int i=0; i<numero; i++)
        if(maximo< *(p+i))
            maximo = *(p+i);
    
    return maximo;
}