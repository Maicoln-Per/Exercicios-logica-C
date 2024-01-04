#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

    int idade,qtde_habit=0,maior_idade=0;
    char sexo;
    float porcen,qtde_intervalo,qtde_mulher;
printf("Pesquisa sobre a população Feminina\n");
printf("Quando quiser finalizar a pesquisa digite: -1");
    do {
        printf("\nDigite a idade: \n");
        scanf("%d",&idade);

        if(idade>maior_idade)maior_idade = idade;

        if(idade!=-1){
            qtde_habit++;

            printf("\nDigite o sexo: \n");
            fflush(stdin);
            scanf("%c",&sexo);
            if (sexo =='f'){
                qtde_mulher++;
                if (idade>=18 && idade<=35){
                    qtde_intervalo++;
                }
            }
        }

    } while (idade>=0);

    porcen = (qtde_intervalo*100)/qtde_mulher;

    printf("Quantidade de habitantes:  %d\n",qtde_habit);
    printf("Porcentagem mulheres: %.2f\n",porcen);
    printf("Maior idade %d \n",maior_idade);
return 0;
}
