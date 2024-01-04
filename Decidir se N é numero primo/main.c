#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"");
int N,resultado;
do{
    printf("Digite um número para saber se ele é primo:\n");
    scanf("%d",&N);
    if((N%1==0)&&(N%N==0)){printf("%d, é um número primo",N);}
    else{printf("O número digitado não é primo");}
 while(N>=1);
 printf("\n");}
return 0;
}
