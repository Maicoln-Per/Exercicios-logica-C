#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int raio,volume,h;
    printf("Digite o valor do raio do cil�ndro:\n");
    scanf("%d",&raio);
    printf("Digite o valor da altura do cil�ndro:\n");
    scanf("%d",&h);
    volume=3.14*(raio*raio)*h;
    printf("O volume do cil�ndro � de:\n%d",volume);
    return 0;}

