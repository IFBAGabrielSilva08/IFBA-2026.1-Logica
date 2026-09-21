//faca um algoritmo para ler dois vetores com 100 elementos cada e em seguida colocar os elementos alternadamente num terceiro vetor

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int x[100], y[100] , z[200];
    int dist1, dist2=0;
    for (dist1=0;dist1<100;dist1++){
        x[dist1]=rand()%100;
        y[dist1]=rand()%100;
        z[dist2++]=x[dist1];
        z[dist2++]=y[dist1];
    }
    printf("\nVetor 1:\n");
    for (dist1=0;dist1<100;dist1++){
        printf("%d ", x[dist1]);
    }
    printf("\nVetor 2:\n");
    for (dist1=0;dist1<100;dist1++){
        printf("%d ", y[dist1]);
    }
    printf("\nVetor 3:\n");
    for (dist1=0;dist1<200;dist1++){
        printf("%d ", z[dist1]);
    }
}

