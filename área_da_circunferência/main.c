#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
float raio;
float area;
printf("digite o valor do raio da circunferencia:\n");
scanf("%f",&raio);
area=(raio*raio)*3.14;
printf("O valor da area da circunferência é de:\n%f",area);
return 0;
}
