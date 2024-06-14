#include <stdio.h>
#include <math.h>

int main()
{
    float superficie,perimetro;
    printf("Bienvenido, ingrese la superficie del cuadrado:");
    scanf("%f",&superficie);
    perimetro=sqrt(superficie)*4;
    printf("La medida del perimetro es de %f",perimetro);
    getchar();
    getchar();
}