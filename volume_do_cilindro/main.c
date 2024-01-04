#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int raio,volume,h;
    printf("Digite o valor do raio do cilíndro:\n");
    scanf("%d",&raio);
    printf("Digite o valor da altura do cilíndro:\n");
    scanf("%d",&h);
    volume=3.14*(raio*raio)*h;
    printf("O volume do cilíndro é de:\n%d",volume);
    return 0;}

