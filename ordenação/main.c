#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5], i, j,aux;

    vetor[0] = 2;
    vetor[1] = 7;
    vetor[2] = 8;
    vetor[3] = 1;
    vetor[4] = 5;

    printf("Vetor Original \n", vetor[i]);
    for(i=0; i<=4; i++)
        printf("| %d | ", vetor[i]);

    //Ordenação
    for(i=0;i<=3;i++){
        for(j=i+1; j<=4; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("Vetor Ordenado \n", vetor[i]);
    for(i=0; i<=4; i++)
        printf("| %d | ", vetor[i]);

    return 0;
}

