//Preencha uma matriz quadrada de ordem 5 com numeros aleatorios e calcule a soma dos numeros presentes em cada linha. Ao final imprima a matriz e os valores das somas.

    #include <stdio.h>
    #include <stdlib.h>
    #include <conio.h>
    #include <time.h>

    int main(){
        //declarações:
        int m [5][5];
        int soma[5];
        int l=0, c=0, s=0;
        srand (time (NULL));
        
        //matriz e soma:
        printf("\n- Matriz:\n");
        for(l=0;l<5;l++){
            soma[l]=0;
            for(c=0;c<5;c++){
                m[l][c]=rand()%100;
                soma[l]=soma[l]+m[l][c];
            }   
        }
        
        //impressões:
        for(l=0;l<5;l++){
            for(c=0;c<5;c++){
                printf("|%d", m[l][c]);
                if(m[l][c]<10){
                    printf(" ");
                }
            }
            printf("\n");
        }            
        
        printf("\n- Somas das linhas:\n");
        for(l=0;l<5;l++){
            printf("Soma da linha %d: %d\n", l, soma[l]);
        }                            
    }