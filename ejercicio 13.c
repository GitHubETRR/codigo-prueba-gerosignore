#include <stdio.h>

int main()
{
    float valor1kg,pesocompra,valorcompra;
    printf("Bienvenido, ingrese el valor de 1kg de su producto:");
    scanf("%f",&valor1kg);
    printf("Ingrese el peso de mercaderia comprada (en kg):");
    scanf("%f",&pesocompra);
    valorcompra=valor1kg*pesocompra;
    printf("El valor total a pagar es de %f",valorcompra);
    getchar();
    getchar();
}

