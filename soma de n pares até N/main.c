#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"");
int N,soma=0;
    printf("Soma de números inteiros pares até N");
printf("\nDigite um número inteiro:\n");
scanf("%d",&N);
for(int I=1;I<=N;I++){
    if(I%2==0){printf("\n%d é par.",I);
    soma+=I;}
    }
    printf("\nSoma = %d",soma);
    return 0;
}
