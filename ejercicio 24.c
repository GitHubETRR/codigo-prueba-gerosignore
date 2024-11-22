#include <stdio.h>

int main()
{
    float radio, altura, area, volumen, PI=3.14;
    printf("Bienvenido, ingrese el radio del cilindro:");
    scanf("%f",&radio);
    printf("Ingresa la altura del cilindro:");
    scanf("%f",&altura);
    area=radio*radio*PI;
    volumen=area*altura;
    printf("El area del cilindro es de %f unidades cuadradas y su volumen es de %f unidades cubicas", area, volumen);
    getchar();
    getchar();
}