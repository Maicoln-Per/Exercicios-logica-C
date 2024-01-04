#include <stdio.h>
#include <stdlib.h>

void main(){
int vetor[10];
int i;

for(i=0;i<10;i++){
printf("Digite um numero  para o vetor: ");
scanf("%d",&vetor[i]);
printf("%d\n",vetor[i]);
}
system("pause");
}
