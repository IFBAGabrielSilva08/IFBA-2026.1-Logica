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
struct aluno a[2];

int main(){
    int q;
    for(q=0;q<2;q++){
        printf("\nALUNO %d: \n", q+1);
        printf("Insira sua matricula: ");
        scanf("%d", &a[q].matricula);
        printf("\nInsira seu nome: ");
        getchar();
        gets(a[q].nome);
        printf("\nInsira sua media: ");
        scanf("%f", &a[q].media);
    }
    printf("\nREGISTROS: ");
    for(q=0;q<2;q++){
        printf ("\nAluno %d\nMatricula: %d - Aluno: %s - Media: %.2f\n", q+1, a[q].matricula, a[q].nome, a[q].media);
    }
}
