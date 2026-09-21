#include <stdio.h>

void imprimir(){
    printf("Insira um numero: ");
}
int ler(){
    getchar();
    int n;
    scanf("%d", n);
    return n;

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
    int n1=ler();

    imprimir();
    int n2=ler();
 
    imprimir();
    int n3=ler();

    int maiorn = maior(maior(n1, n2), n3);
    printf("Maior: %d", maiorn);

    return 0;

}