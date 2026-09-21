//enviado no gmail

#include <stdio.h>
#include<conio.h>

//char                 = variavel de palavras
//gets()               = scanf para palavras e frases
//%s                   = palavras
//%c                   = um caractere
//setbuf(stdin, NULL); = limpar o buffer


int main(){
    char nome[30], endereco[30], mae[30];
    printf("Insira seu nome: ");
    gets(nome);
    printf("Insira o seu endereco: ");
    gets(endereco);
    printf("Insira o nome da sua mae: ");
    gets(mae);
    printf("Seu nome: %s\nEndereco: %s\nNome da sua mae: %s", nome, endereco, mae);
    return 0;
}