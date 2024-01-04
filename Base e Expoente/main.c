#include <stdio.h>
#include <stdlib.h>

int main(){
int base,expoente,contador,potencia;
//entrada
printf("Base e Expoente");
printf("\nDigite o valor de B e E para exibir o resultado da potencia:\n");
printf("Base:");
scanf("%d",&base);
printf("Expoente:");
scanf("%d",&expoente);
contador=0;
potencia=1;
while(contador!=expoente){potencia=potencia*base;
contador++;}
printf("\nO valor de %d elevado a %d: %d\n",base,expoente,potencia);
return 0;}
