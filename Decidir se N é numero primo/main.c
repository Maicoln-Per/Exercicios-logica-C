#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"");
int N,resultado;
do{
    printf("Digite um n�mero para saber se ele � primo:\n");
    scanf("%d",&N);
    if((N%1==0)&&(N%N==0)){printf("%d, � um n�mero primo",N);}
    else{printf("O n�mero digitado n�o � primo");}
 while(N>=1);
 printf("\n");}
return 0;
}
