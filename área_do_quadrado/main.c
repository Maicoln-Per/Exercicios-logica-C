#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
int area;
int lado;
    //entrada
    printf("Digite um lado do quadrado:\n");
    scanf("%d",&lado);
    //processamento
    area=lado*lado;
    //sa�da
    printf("A multiplica��o dos lados ir�o dar uma area de:\n %.2d",area);
    return 0;}
