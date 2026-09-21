#include <stdio.h>

struct abastecimento{
    float quilometragem;
    float valor_total;
    float preco_combustivel;
    char tipo_combustivel;
};

//Funcoes    
int menu(){
    int x;
    printf("\n===== CONTROLE DE ABASTECIMENTOS =====\n1 - Adicionar abastecimento\n2 - Listar abastecimentos\n3 - Exibir a quantidade total de litros abastecidos\n4 - Exibir o abastecimento de maior valor\n5 - Calcular total gasto com combustivel\n6 - Exibir resumo dos abastecimentos\n7 - Sair\nEscolha uma Opcao: ");
    scanf("%d", &x);
    return x;

}

struct abastecimento adicionar(){
    struct abastecimento x;
    
    printf("\nInsira a quilometragem atual: ");
    scanf("%f", &x.quilometragem);
    printf("\nInsira o valor total: ");
    scanf("%f", &x.valor_total);
    printf("\nInsira o preco do combustivel: ");
    scanf("%f", &x.preco_combustivel);
    printf("\nG - Gasolina\nE - Etanol\nD - Diesel\nInsira o tipo de combustivel: ");
    scanf(" %c", &x.tipo_combustivel);
    
    return x;
}

void listar(struct abastecimento x[], int i){
    int p;
    if (i==0){
        printf("\nNenhum abastecimento registrado!");
        return;
    }else{
        for (p=0;p<i;p++){
            float litros=(x[p].valor_total)/(x[p].preco_combustivel);
            
            printf("\n==== ABASTECIMENTOS ====\nAbastecimento [%d]\nQuilometragem: %.2f km\nValor total: R$ %.2f\nPreco combustivel: R$ %.2f\n", p+1, x[p].quilometragem, x[p].valor_total, x[p].preco_combustivel);
            if(x[p].tipo_combustivel=='G'||x[p].tipo_combustivel=='g'){
                printf("Tipo: Gasolina\nLitros: %.2fL\n----------------------------\n", litros);
            } else if (x[p].tipo_combustivel=='E'||x[p].tipo_combustivel=='e'){
                printf("Tipo: Etanol\nLitros: %.2fL\n----------------------------\n", litros);
            } else if(x[p].tipo_combustivel=='D'||x[p].tipo_combustivel=='d'){
                printf("Tipo: Diesel\nLitros: %.2fL\n----------------------------\n", litros);
            }
        }
    }
}

void litrostotais(struct abastecimento x[], int i){
    int p;
    float total=0;
    if (i==0){
        printf("\nNenhum abastecimento registrado!");
        return;
    }else{
        for(p=0;p<i;p++){
            total=total+((x[p].valor_total)/(x[p].preco_combustivel));
        }
        printf("\n==== LITROS ABASTECIDOS ====\nQuantidade total de litros abastecidos: %.2fL\n", total);
    }
}

void maiorvalor(struct abastecimento x[], int i){
    int a=0;
    if (i==0){
        printf("\nNenhum abastecimento registrado!");
        return;
    }else{
        float maior = 0;
        for(int p=0;p<i;p++){
            if(x[p].valor_total>maior){
                maior=x[p].valor_total;
                a=p;
            }
        }
        float litros=x[a].valor_total/x[a].preco_combustivel;
        printf("\n==== ABASTECIMENTO DE MAIOR VALOR ====\nAbastecimento [%d]\nQuilometragem: %.2f km\nValor total: R$ %.2f\nPreco combustivel: R$ %.2f\n", a+1, x[a].quilometragem, x[a].valor_total, x[a].preco_combustivel);
            if(x[a].tipo_combustivel=='G'||x[a].tipo_combustivel=='g'){
                printf("Tipo: Gasolina\nLitros: %.2fL\n----------------------------\n", litros);
            } else if (x[a].tipo_combustivel=='E'||x[a].tipo_combustivel=='e'){
                printf("Tipo: Etanol\nLitros: %.2fL\n----------------------------\n", litros);
            } else if(x[a].tipo_combustivel=='D'||x[a].tipo_combustivel=='d'){
                printf("Tipo: Diesel\nLitros: %.2fL\n----------------------------\n", litros);
            }
    }
}

void totalgasto(struct abastecimento x[], int i){
    int p;
    float total=0;
    if (i==0){
        printf("\nNenhum abastecimento registrado!");
        return;
    }else{
        for(p=0;p<i;p++){
            total=total+x[p].valor_total;
        }
        printf("\n==== TOTAL GASTO ====\nGastos totais com combustivel: R$%.2f\n", total);
    }
}

void resumo(struct abastecimento x[], int i){
    if (i==0){
        printf("\nNenhum abastecimento registrado!");
        return;
    }else{
        float maior=0, menor=x[0].valor_total, totalg=0, totall=0, pmedio=0;
        for(int p=0;p<i;p++){
            totalg=totalg+x[p].valor_total;
            totall=totall+(x[p].valor_total/x[p].preco_combustivel);
            if(x[p].valor_total>maior){
                maior=x[p].valor_total;
            }
            if(x[p].valor_total<menor){
                menor=x[p].valor_total;
            }
            pmedio=pmedio+x[p].preco_combustivel;
        }
        pmedio=pmedio/i;
        printf("\n==== RESUMO DOS ABASTECIMENTOS ====\nQuantidade de abastecimentos: %d\nTotal gasto: R$ %.2f\nTotal de litros: %.2fL\nMaior abastecimento: R$ %.2f\nMenor abastecimento: R$ %.2f\nPreco medio do combustivel: R$ %.2f\n", i, totalg, totall, maior, menor, pmedio);
    }
}



//Programa
int main(){
    FILE *arquivo;
    struct abastecimento vetor[100];
    int i=0;

    //carregamento do arquivo

    arquivo=fopen("abastecimentos.dat","r");
    if(arquivo==NULL){
        printf("abastecimentos.dat nao encontrado, criando arquivo... ");
        arquivo=fopen("abastecimentos.dat","w");
        if(arquivo==NULL){
            printf("Nao foi possivel criar o arquivo!\n");
            return 1;
        }else{
            printf("Arquivo criado com sucesso!\n");
            fclose(arquivo);
            i=0;
        }
    }else{
        printf("abastecimentos.dat carregado com sucesso! ");
        while(fscanf(arquivo, "%f %f %f %c", &vetor[i].quilometragem, &vetor[i].valor_total, &vetor[i].preco_combustivel, &vetor[i].tipo_combustivel)!=EOF){
            i++;
        }
        if(i==1){
            printf("%d Abastecimento carregado", i);
        }else if(i!=0){
            printf("%d Abastecimentos carregados", i);
        }
        fclose(arquivo);

    } 

    //estrutura do programa+funcoes
    int adicionado=0;
    int opcao;
    do{
        opcao=menu();
        switch(opcao){
            case 1:
                vetor[i]=adicionar();
                arquivo=fopen("abastecimentos.dat", "a");
                if (arquivo == NULL) {
                    printf("Erro ao abrir o arquivo!\n");
                    break;
                } else {
                fprintf(arquivo, "%.2f %.2f %.2f %c\n", vetor[i].quilometragem, vetor[i].valor_total, vetor[i].preco_combustivel, vetor[i].tipo_combustivel);
                fclose(arquivo);
                i++;
                adicionado++;
                }
                break;
            case 2:
                listar(vetor, i);
                break;
            case 3:
                litrostotais(vetor, i);
                break;
            case 4:
                maiorvalor(vetor, i);
                break;
            case 5:
                totalgasto(vetor, i);
                break;
            case 6:
                resumo(vetor, i);
                break;
            case 7:
                if (adicionado !=0){
                    if (adicionado==1){
                        printf("\n%d Abastecimento foi registrado, saindo...\n", adicionado);
                    }else{
                        printf("\n%d Abastecimentos foram registrados, saindo...\n", adicionado);
                    }
                }else{
                    printf("\nSaindo...\n");
                }
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

    }while(opcao!=7);
    


}