#include <stdio.h>

int main ()
{

int Num;
printf("Escribe un número: ");
scanf("%d", &Num); //Guarda el número leído en la variable Num

if (Num == 3){
printf("El número introducido es el 3\n");
}
else {
printf("El número introducido no es el 3\n");
}
printf("Fin del algoritmo\n");

//Fin del programa
return 0;
}