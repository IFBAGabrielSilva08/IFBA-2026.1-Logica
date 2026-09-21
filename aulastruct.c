//enviado no gmail

#include<stdio.h>
#include<conio.h>

int main(){
    struct ficha_aluno{
        char nome[50];
        char disciplina[50];
        float nota1;
        float nota2;
        float nota3;
    };
    
    int c=1;
    float media;
    float mediag;
    while (c<=5){
    struct ficha_aluno aluno1;
    printf("Digite o nome: ");
    setbuf(stdin, NULL);
    gets(aluno1.nome);
    printf("Digite a disciplina: ");
    setbuf(stdin, NULL);
    gets(aluno1.disciplina);
    printf("Digite a nota 1: ");
    scanf("%f", &aluno1.nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &aluno1.nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &aluno1.nota3);
    media=(aluno1.nota1+aluno1.nota2+aluno1.nota3)/3;
    printf("Nome: %s\nDisciplina: %s\nMedia: %.2f", aluno1.nome, aluno1.disciplina, media);
    mediag=mediag+media;
    ++c;
    printf("\n");
    }
    mediag=mediag/c;
    printf("\nMedia da turma: %.2f", mediag);

    
    return 0;

}