#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL,"");
  int ano,resultado;
  do{
  printf("\nDescubra a sua idade atual, de acordo com o seu ano de nascimento\ne se o ano que você nasceu é ou não Bissexto.\n");
  printf("\nDigite um ano válido:\n");
  scanf("%d",&ano);
  resultado=2022-ano;
  if(ano%4==0){printf("Ano Bissexto");}
  else{printf("Ano Não-Bissexto");}
   printf("\nA pessoa tem, ou irá fazer:\n%d anos\n",resultado);
  if(ano<1892 || ano>2022){printf("\nEsta pessoa,(possívelmente) não existe.\n");}
  }while(ano>=1892 || ano<=2022);
  return 0;
}
