#include <stdio.h>
#include <conio.h>

struct funcionario{
    char nome [50];
    float salario;
    int hextra;
};

struct funcionario funcionario1;
int cadastrado = 0;
float sfinal;

void cadastro(){
    getchar();
    printf("\nDigite seu nome: ");
    gets(funcionario1.nome);
    printf ("\nDigite seu salario: R$");
    scanf("%f", &funcionario1.salario);
    printf ("\nDigite a quantidade de horas extras: ");
    scanf ("%d", &funcionario1.hextra);
    sfinal = funcionario1.salario + funcionario1.hextra*25;
    cadastrado = 1;
        
}

void nome(){
    if (cadastrado == 0){
        printf("\nFuncionario nao cadastrado!\n");
        return;
    }
    else{
        printf ("\nSeu nome: %s\n", funcionario1.nome);
    }    
}

void salariobase(){
    if (cadastrado == 0){
        printf("\nFuncionario nao cadastrado!\n");
        return;
    }
    else{
        printf("\nSeu salario base: R$%.2f\n", funcionario1.salario);
    } 
    
}

void salariofinal(){
    if (cadastrado == 0){
        printf("\nFuncionario nao cadastrado!\n");
        return;
    }
    else{
        printf("\nSeu salario final: R$%.2f\n", sfinal);
        }   
}

void dados(){
    if (cadastrado==0){
        printf("\nFuncionario nao cadastrado!\n");
        return;
    } else{
        printf("\nDADOS DO FUNCIONARIO \n");
        printf("Nome: %s\n", funcionario1.nome);
        printf("Salario base: R$%.2f\n", funcionario1.salario);
        printf("Horas extras trabalhadas: %dh\n", funcionario1.hextra);
        printf("Salario final: R$%.2f\n", sfinal);
    }
}

int main(){
    int x;
    do{
        printf("\n===== MENU =====\n1 - Cadastrar Funcionario\n2 - Exibir Nome do Funcionario\n3 - Exibir Salario Base\n4 - Calcular Salario Final\n5 - Exibir Dados do Funcionario\n6 - Sair\nEscolha uma opcao: ");
        scanf("%d", &x);
        if (x>6 || x<1){
            printf("\nOpcao invalida!");
        } 
        switch (x){
            case 1:
                cadastro();
                break;
            case 2:
                nome();
                break;
            case 3:
                salariobase();
                break;
            case 4:
                salariofinal();
                break;
            case 5:
                dados();
                break;
            case 6:
                printf("\nPrograma encerrado.");
                break;    
        }
    }while (x!=6);
}