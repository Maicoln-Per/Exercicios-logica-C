#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
int diferenca,x,y;
printf("digite o valor do maior n�mero:\n");
scanf("%d",&x);
printf("digite o valor do menor n�mero:\n");
scanf("%d",&y);
diferenca=x-y;
printf("A diferen�a entre %d e %d � de:\n %d",x,y,diferenca);
return 0;}
