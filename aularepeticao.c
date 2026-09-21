//enviado no gmail

#include <stdio.h>
//while=enquanto
int main(){
    int n=0;
    while(n<=100){
        printf ("%d\n", n);
        n=n+3;
    }
//for=para
    printf("----for:\n");
    for(int i=0;i<=1000000;i++){
        printf("%d\n", i);
    }
    return 0;
//do while=faz uma vez e repete caso condicao seja verdadeira
}