#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][4];
    mat[1][2]=100;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    return 0;}
