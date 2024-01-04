#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int a,b,c;
    int troca;
    printf("Digite o numero 1,2 e 3:\n");
    scanf("%d %d %d",&a,&b,&c);
   if(a>c){troca=a;a=c;c=troca;}
   if(a>b){troca=a;a=b;b=troca;}
   if(b>c){troca=b;b=c;c=troca;}
    printf("Em ordem crescente:\n%d\n%d\n%d\n",a,b,c);
    return 0;
}
