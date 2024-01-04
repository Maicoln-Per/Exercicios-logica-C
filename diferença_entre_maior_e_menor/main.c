#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
int diferenca,x,y;
printf("digite o valor do maior número:\n");
scanf("%d",&x);
printf("digite o valor do menor número:\n");
scanf("%d",&y);
diferenca=x-y;
printf("A diferença entre %d e %d é de:\n %d",x,y,diferenca);
return 0;}
