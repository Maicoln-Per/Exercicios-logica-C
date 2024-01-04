#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

int SOMA,X,Y;
//Entrada
printf("Digite um número inteiro:\n");
scanf("%d",&X);
printf("Digite um número inteiro:\n");
scanf("%d",&Y);
//processamento
SOMA=X+Y;
//Saída
printf("A soma dos números %d e %d é: %d",X,Y,SOMA);
return 0;
}

