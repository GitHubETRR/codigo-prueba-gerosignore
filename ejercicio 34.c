#include <stdio.h>

int main()
{
    float A, B, C;
    int D, E;
    printf("Bienvenido, ingrese el primer valor");
    scanf("%f",&A);
    printf("Ingrese el segundo valor");
    scanf("%f",&B);
    C=A+B;
    D=C/2;
    E=D*2;
    if(E==C)
    {
        printf("La suma de sus dos valores es par");
    }
    else
    {
        printf("La suma de sus numeros no es par");
    }
    getchar();
    getchar();
}