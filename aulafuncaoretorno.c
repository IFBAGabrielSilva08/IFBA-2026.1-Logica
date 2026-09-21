#include <stdio.h>

void imprimir(){
    printf("Digite um valor: ");
}
int ler(){
    int valor;
    scanf("%d", &valor);
    return valor;
}
int maior(int a, int b){
    if(a>b){
        return a;

    }else{
        return b;
    }
}
int main(){
    imprimir();
    int n=ler();
    printf("N: %d\n", n);
    
    imprimir();
    int n2=ler();
    printf("N: %d\n", n2);
    
    printf("Maior: %d\n", maior(n, n2));

}