#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

int SOMA,X,Y;
//Entrada
printf("Digite um n�mero inteiro:\n");
scanf("%d",&X);
printf("Digite um n�mero inteiro:\n");
scanf("%d",&Y);
//processamento
SOMA=X+Y;
//Sa�da
printf("A soma dos n�meros %d e %d �: %d",X,Y,SOMA);
return 0;
}

