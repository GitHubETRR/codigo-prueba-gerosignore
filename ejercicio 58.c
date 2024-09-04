#include <stdio.h>

// Función para calcular la potencia X^Y
int potencia(int X, int Y) {
    int resultado = 1;
    for(int i = 0; i < Y; i++) {
        resultado *= X;
    }
    return resultado;
}

int main() {
    int base, exponente;
    
    // Solicitar la base y el exponente al usuario
    printf("Ingrese la base: ");
    scanf("%d", &base);
    
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    
    // Llamar a la función potencia y mostrar el resultado
    int resultado = potencia(base, exponente);
    printf("%d elevado a la potencia %d es %d\n", base, exponente, resultado);
    getchar();
    getchar();
}