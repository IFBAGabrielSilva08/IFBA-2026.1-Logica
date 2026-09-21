//faca um algoritmo para ler 100 numeros inteiros e em seguida escrever os numeros acima da media de todos numeros
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(){
    int x[100];
    int soma;
    int d;
    srand(time(NULL));
    for (d=0; d<100; d++){
        x[d] = rand()%100;
        soma = soma + x[d];
    }
    int media = soma/100;
    printf("Maiores do que a media(%d): \n", media);
    for (d=0; d<100; d++){
        if (x[d]>media){
            printf("%d\n", x[d]);
        }
    }

}