#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome[50];
    int idade;
    int opcao;

    do {
        printf("\nOpcoes: \n1 - Criar arquivo\n2 - Adicionar\n3 - Ler conteudo\n0 - SAIR\nDigite a opcao: ");
        scanf("%d", &opcao);

    if (opcao == 1 ) {
        arquivo = fopen("alunos.txt", "w");
        if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
        }

        fprintf(arquivo, "Ana 20\n");
        fprintf(arquivo, "Carlos 22\n");
        fprintf(arquivo, "Mariana 19\n");

        fclose(arquivo);
        printf("Arquivo criado com sucesso!\n");
    }
    else if (opcao == 2) {
        arquivo = fopen("alunos.txt", "a");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }

        fprintf(arquivo, "Pedro 21\n");

        fclose(arquivo);
    }
    else if (opcao == 3) {

        arquivo = fopen("alunos.txt", "r");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }

        printf("\nAlunos cadastrados:\n");
        printf("--------------------\n");

        while (fscanf(arquivo, "%49s %d", nome, &idade) != EOF) {
            printf("Nome: %s\tIdade: %d\n", nome, idade);
        }

        fclose(arquivo);

    }


    } while (opcao != 0);

    return 0;
}