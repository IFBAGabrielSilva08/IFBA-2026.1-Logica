//Faca um algoritmo para ler e armazenar 5 numeros inteiros
#include <stdio.h>
int main(){
    int x[5];
    int d;
    /*do{
        printf("Digite um numero: ");
        scanf("%d", &x[d]);
        d++;
    }while (d<5);
    d=0;
    do{
        printf("X(%d): %d\n", d, x[d]);
        d++;
    }while (d<5);
    */
    for (d=0; d<5; d++){
        printf("Digite um numero: ");
        scanf("%d", &x[d]);
        printf("X[%d]: %d\n", d, x[d]);
    }
    printf("\nConteudo do vetor:\n");
    for (d=0; d<5; d++){
        printf("X[%d]: %d \t", d, x[d]);
    }
}