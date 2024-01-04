#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
int num, bit, bin = 0, pot = 1;

//entrada
printf("Conversor de Números Binários\n");

printf("Escreva um número inteiro positivo:\n");
scanf("%d",&num);

//processamento

while(num>0){
bit=num%2;
num=num/2;
bin=bin+(bit*pot);
pot=pot*10;
}

//saida

printf("%d\n",bin);
return 0;
}
