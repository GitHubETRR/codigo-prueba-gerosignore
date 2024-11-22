#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10

void Numero_primo(int num, int matriz[N][N], int div, int cont, int a, int b);
void Matriz_Random(int matriz[N][N]);

int main(){
    int matriz[N][N];
    int num;
    int raiz;
    int cont = 0;
    int a;
    int b;
    Matriz_Random(matriz);
    Numero_primo(num, matriz, div, cont, a, b);
    getchar();
    getchar();
}

void Matriz_Random(int matriz[N][N]){
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100 + 1;
            printf("%2d ", matriz[i][j]);  
        }
        printf("\n");
    }    
}    

void Numero_primo(int num, int matriz[N][N], int div, int cont, int a, int b){
     for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = num;
            div = num-1;
            do
            {
                a=num/div;
                b=(float)num/div;
                div--;
                cont++;
            } 
            while (a!=b);

            if(cont>=div){              
                printf("%d", num);
            }
        }
    }
}