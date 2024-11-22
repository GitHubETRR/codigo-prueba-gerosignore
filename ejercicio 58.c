#include <stdio.h>

int potencia(int X, int Y) {
    int resultado = 1;
    for(int i = 0; i < Y; i++) {
        resultado *= X;
    }
    return resultado;
}

int main() {
    int base, exponente;
    
    printf("Ingrese la base: ");
    scanf("%d", &base);
    
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    
    int resultado = potencia(base, exponente);
    printf("%d elevado a la potencia %d es %d\n", base, exponente, resultado);
    getchar();
    getchar();
}