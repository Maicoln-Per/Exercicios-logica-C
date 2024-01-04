#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int num,    /* numero dado                                  */
    aux,        /* guarda o pedaco do numero que resta inverter */
    reverso;    /* guarda o numero de tras para frente          */
printf("Verificando se um número é um palíndromo\n");
  printf("\nDigite um natural:\n");
  scanf("%d", &num);

  /* inicializacoes */
  aux = num;
  reverso = 0;

  while (aux != 0) {
    reverso = reverso * 10 + aux % 10;  /* acrescenta mais um digito a direita */
    aux = aux / 10;                     /* joga fora esse digito */
  }

  if (reverso == num)
    printf("%d é um palíndromo\n", num);
  else
    printf("%d não é um palíndromo\n", num);

  return 0;
}
