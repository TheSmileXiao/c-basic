#include <stdio.h>
#include <string.h>

int main()
{
    char cadena1[100],cadena2[100];
    
    printf("Indroduce la cadena 1:\n");
    fgets(cadena1,100,stdin);

    printf("Introduce la cadena 2:\n");
    fgets(cadena2,100,stdin);

    if( strcmp(cadena1,cadena2)==0 ){
        printf("\nLas dos cadenas son iguales");
    }else{
        printf("\nLas dos cadenas son distintos");
    }

    printf("\nLa cadena 1 es : %s",cadena1);
    printf("La cadena 2 es : %s",cadena2);

    strcat(cadena1,cadena2);
    printf("Las cadenas concatenadas son %s",cadena1);

    return 0;
}