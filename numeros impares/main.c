#include <stdio.h>
#include <stdlib.h>

int main(){
int N,I,impar;
printf("\nGerador de numeors inteiros impares\n");
printf("\nDigite o valor de N:\n");
scanf("%d",&N);
I=0;
impar=1;
printf("Os %d primeiros numeros impares sao:\n",N);
while(I<N){printf("%d\n",impar);
impar=impar+2;
I++;}
return 0;
}
