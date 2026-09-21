#include <stdio.h>


struct aluno{
    char nome [50];
    char disciplina [50];
    float nota1;
    float nota2;
    float nota3;
};

struct aluno aluno1;
int cadastrado = 0;
float media;

void cadastro(){
    getchar();
    printf("\nDigite seu nome: ");
    gets(aluno1.nome);
    printf ("\nDigite sua disciplina: ");
    gets(aluno1.disciplina);
    printf ("\nDigite sua primeira nota: ");
    scanf ("%f", &aluno1.nota1);
    printf ("\nDigite sua segunda nota: ");
    scanf ("%f", &aluno1.nota2);
    printf ("\nDigite sua terceira nota: ");
    scanf ("%f", &aluno1.nota3);
    media = (aluno1.nota1+aluno1.nota2+aluno1.nota3)/3;
    cadastrado = 1;
        
}

void cmedia(){
    if (cadastrado == 0){
        printf("\nAluno nao cadastrado!\n");
        return;
    }
    else{
        printf ("\nSua media: %.1f\n", media);
    }    
}

void situacao(){
    if (cadastrado == 0){
        printf("\nAluno nao cadastrado!\n");
        return;
    }
    else if (media>=7){
        printf("\nAprovado!\n");
    } 
    else if (media>=5 || media<7){
        printf ("\nRecuperacao!\n");
    }
    else{
        printf ("\nReprovado!\n");
    }
}

void boletim(){
    if (cadastrado == 0){
        printf("Aluno nao cadastrado!\n");
        return;
    }
    else{
        printf("\n===BOLETIM===\n");
        printf("Aluno: %s\n", aluno1.nome);
        printf("Disciplina: %s\n", aluno1.disciplina);
        printf("Notas: %.1f - %.1f - %.1f\n", aluno1.nota1, aluno1.nota2, aluno1.nota3);
        printf("Media: %.1f\n", media);
        if (media>=7){
            printf("Situacao: Aprovado\n");
        }
        else if (media>=5 || media<7){
            printf("Situacao: Recuperacao\n");
        }
        else{
            printf("Situacao: Reprovado\n");
        }
    }    
}

int main(){
    int x;
    do{
        printf("\n===== MENU =====\n1 - Cadastrar Aluno\n2 - Calcular Media\n3 - Exibir Situacao do Aluno\n4 - Exibir Boletim Completo\n5 - Sair\nEscolha uma opcao: ");
        scanf("%d", &x);
        if (x>5 || x<1){
            printf("Opcao invalida!");
        }
        switch (x){
            case 1:
                cadastro();
                break;
            case 2:
                cmedia();
                break;
            case 3:
                situacao();
                break;
            case 4:
                boletim();
                break;
            case 5:
                printf("Programa encerrado.");
                break;    
        }
    }while (x!=5);
}