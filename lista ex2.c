#include <stdio.h>

struct funcionario{
    char nome[50];
    float salario;
};

struct funcionario f;

int cadastrado = 0;

float percentual;

//declarei de maneira global porque não foi especificado na questao.


void cadastro(){
    getchar();
    
    printf("\nDigite o nome do funcionario: ");
    fgets(f.nome, 50, stdin);

    printf("\nDigite o salario do funcionario: R$");
    scanf("%f", &f.salario);

    cadastrado = 1;

}

void exibir(){
    if (cadastrado == 0){
        printf("\nFuncionario nao cadastrado!\n");
        return;
    }
    
    printf("\nNome do funcionario: %sSalario: R$%.2f\n", f.nome, f.salario);
}

void porvalor(float salario){
    if (cadastrado == 0){
        printf("\nFuncionario nao cadastrado!\n");
        return;
    }
    
    //não encontrei na questao qual deveria ser o valor do percentual, então inseri a pergunta nas opcoes 3 e 4.
    printf("\nDigite o percentual de aumento: ");
    scanf("%f", &percentual);

    salario=salario+(salario*percentual/100);

    exibir();
    printf("Salario atualizado: R$%.2f\n", salario);

}

void porreferencia(float *salario){
    if (cadastrado == 0){
        printf("\nFuncionario nao cadastrado!\n");
        return;
    }
    
    //não encontrei na questao qual deveria ser o valor do percentual, então inseri a pergunta nas opcoes 3 e 4.
    printf("\nDigite o percentual de aumento: ");
    scanf("%f", &percentual);

    *salario=*salario+(*salario*percentual/100);

    exibir();
    printf("Salario atualizado: R$%.2f\n", *salario);

}


int main(){
    
    int opcao;
    
    do{
        printf("\n----MENU----\n");
        printf("1 - Cadastrar funcionario\n");
        printf("2 - Exibir dados do funcionario\n");
        printf("3 - Aplicar aumento por valor\n");
        printf("4 - Aplicar aumento por referencia\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf ("%d", &opcao);
        
        switch (opcao){
            case 1:
                printf("\n--OPCAO 1--\n");
                cadastro();
                break;
            case 2:
                printf("\n--OPCAO 2--\n");
                exibir();
                break;
            case 3:
                printf("\n--OPCAO 3--\n");
                porvalor(f.salario);
                break;
            case 4:
                printf("\n--OPCAO 4--\n");
                porreferencia(&f.salario);
                break;
            case 5:
                printf("\nSaindo do menu...\n");
                break;
            default:
                printf("\nOPCAO INVALIDA!\n"); 
        }
    
    }while (opcao!=5);

}