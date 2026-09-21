#include <stdio.h>
int main(){
    int nfinal, freq, atv, ocr;
    printf ("Insira sua Nota final: ");
    scanf("%d", &nfinal);
    if (nfinal<0 || nfinal>10){
        printf("Número invalido!");
        return 0;
    }
    printf("Insira sua frequência: ");
    scanf("%d", &freq);
    if (freq<0 || freq>100){
        printf("Número invalido!");
        return 0;
    }
    printf("Insira a quantidade de atividades entregues: ");
    scanf("%d", &atv);
    if(atv<0 || atv>10){
        printf("Número invalido!");
        return 0;
    }
    printf("Insira a quantidade de ocorrências escolares: ");
    scanf("%d", &ocr);
    if (ocr<0){
        printf("Número invalido!");
        return 0;
    }

    



}




