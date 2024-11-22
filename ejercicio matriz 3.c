#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10

void Matriz_Random(int matriz[N][N]);
void Numero_primo(int num, int matriz, int raiz, int cont, int a, int b);

int main(){
    int matriz[N][N];
    int num;
    int raiz;
    int cont = 0;
    int a;
    int b;
    Matriz_Random(matriz);
    Numero_primo(num, matriz, raiz, cont, a, b);
    getchar();
    getchar();
   
    return 0;
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

void numero_primo(int num, int matriz[N][N], int raiz, int cont, int a, int b){
     for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = num;
            raiz=sqrt(num);
            do
            {
                a=num/raiz;
                b=(float)num/raiz;
                raiz--;
                cont++;
            } 
            while (a!=b);
            
             if(cont>=raiz){
                            
                printf("%d", num);
            }
        }
    } 
 }    
