//10/07
//realizar uma ficha de aluno utilizando struct e vetor
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct aluno{
    int matricula;
    char nome[51];
    float media;
};
struct aluno a;

int main(){
    int q;
    for(q=0;q<5;q++){
        getchar();
        printf("Insira sua matricula: ");
        scanf("%d", a.matricula);
        printf("Insira seu nome: ");
        gets(a.nome);
        printf("Insira sua media: ");
        scanf("%d", a.media);
    }
}
