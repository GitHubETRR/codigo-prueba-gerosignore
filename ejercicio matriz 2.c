#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void Matriz_Random(int matriz[N][N]);
void Num_Max(int valormax, int filamax, int colmax, int cont, int matriz[N][N]);

 int main(){
    int matriz[N][N];
    int valormax = 0;
    int filamax = 0;
    int colmax = 0;
    int cont = 0;
    Matriz_Random(matriz);
    Num_Max(valormax, filamax, colmax, cont, matriz);
    getchar();
    getchar();
   
    return 0;
}

void Matriz_Random(int matriz[N][N]){
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 15 + 1;
            printf("%2d ", matriz[i][j]);  
        }
        printf("\n");
    }    
}
void Num_Max(int valormax, int filamax, int colmax, int cont, int matriz[N][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > valormax) {
                valormax = matriz[i][j];
            }
            
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] == valormax) {
                printf("Fila: %d  columna: %d \n", i+1, j+1);
                cont++;
            }
            
        }
    }
    printf("El valor maximo es: %d y se repite %d veces", valormax, cont);
}