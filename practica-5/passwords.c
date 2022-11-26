#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char caracter(int a);
int main (){
srand(time(NULL));
int pass[8];
for (int i=0;i<8;i++){
pass[i]=(rand() %26);
}
char final[8];
final[0]=caracter(pass[0]);
final[1]=caracter(pass[1]);
final[2]=caracter(pass[2]);
final[3]=caracter(pass[3]);
final[4]=caracter(pass[4]);
final[5]=caracter(pass[5]);
final[6]=caracter(pass[6]);
final[7]=caracter(pass[7]);
//Fin del programa

printf("%s\n",final);
return 0;
}

char caracter(int a){
char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
return alfabeto[a];
}