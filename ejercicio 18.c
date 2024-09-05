#include <stdio.h>

int main()
{
    float const pi = 3.14;
    float radio, area;
    printf("Bienvenido, ingrese radio de su ciculo:");
    scanf("%f",&radio);
    area=radio*radio*pi;
    printf("El area de su circulo es: %f",area);
    getchar();
    getchar();
}