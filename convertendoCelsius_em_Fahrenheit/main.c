#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    //vari�veis
    float celsius;
    float fahrenheit;
    //Entrada
    printf("Receba �celsius:\n");
    scanf("%f",&celsius);
    //processamento
fahrenheit=(9*celsius+160)/5;
//sa�da
    printf("A temperatura convertida de �C para �F � de:\n%.2f",fahrenheit);
    return 0;}

