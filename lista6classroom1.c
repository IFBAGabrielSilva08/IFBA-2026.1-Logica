//enviado no gmail

#include<stdio.h>
#include<conio.h>

struct pessoa{
    char nome[50];
    int idade;
};

struct pessoa pessoa1;
int cadastrado = 0;

void cadastro(){
    getchar();
    
    printf("\nDigite o seu nome: ");
    gets(pessoa1.nome);
     
    printf("\nDigite a sua idade: ");
    scanf("%d", &pessoa1.idade);
    
    cadastrado = 1;
}

void nome(){
    if(cadastrado==0){
        printf("Voce nao realizou o cadastro!");
        return;
    } else{
        printf("\nNome: %s\n", pessoa1.nome);
    }
}

void idade(){
    if(cadastrado==0){
        printf("Voce nao realizou o cadastro!");
        return;
    } else{
        printf("\nIdade: %d\n", pessoa1.idade);
    }
}
void nomeidade(){
    if(cadastrado==0){
        printf("Voce nao realizou o cadastro!");
        return;
    } else{
        printf("\nNome: %s\n", pessoa1.nome);
        printf("Idade: %d\n", pessoa1.idade);
    }
}
void nascimento(){
    if(cadastrado==0){
        printf("\nVoce nao realizou o cadastro!\n");
        return;
    } else{
        int anonascimento = 2026 - pessoa1.idade;
        printf("\nAno de nascimento: %d\n", anonascimento);
    }
}

int main(){
    int x;
    do {
        printf ("\n===== MENU =====\n1 - Cadastrar Pessoa\n2 - Exibir Nome\n3 - Exibir Idade\n4 - Exibir Nome e Idade\n5 - Exibir Ano de Nascimento\n6 - Sair\nEscolha uma opcao: ");
        scanf ("%d", &x);
        switch (x){
            case 1:
                cadastro();
                break;
            case 2:
                nome();
                break;
            case 3:
                idade();
                break;
            case 4:
                nomeidade();
                break;
            case 5:
                nascimento();
                break;
            case 6:
                printf ("\nPrograma encerrado.");
                break;
            default:
                printf("\nNumero invalido!\n");
                break;
        }

    }while(x!=6);
}