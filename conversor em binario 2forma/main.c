#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
int num, bit, bin = 0, pot = 1, contador;
printf("Conversor de N�meros Bin�rios\n");
printf("\nEscreva um n�mero inteiro positivo:\n");
scanf("%d",&num);
contador=1;
do{
bit=num%2;
num=num/2;
bin=bin+(bit*pot);
pot=pot*10;
}
while(num>0);
printf("Seu n�mero decimal, em bin�rio �:\n");
printf("%d\n",bin);
return 0;
}
