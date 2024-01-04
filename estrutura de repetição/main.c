#include <stdio.h>
#include <stdlib.h>

int main(){
int num;
int contador,resultado;
//entrada
printf("Digite um numero inteiro:\n");
scanf("%d",&num);
//processamento
contador=1;
while(contador<=10){
        resultado=num*contador;
//saída
printf("%d X %d = %d\n",contador,num,resultado);
contador++;//contador=contador+1;
}
return 0;}

