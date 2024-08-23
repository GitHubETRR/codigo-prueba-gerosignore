#include <stdio.h>

#define CONV_ANIOS_DIAS 365.25

int main()
{
    float edad,edad_dias;
    printf("Bienvenido, ingrese cuantos anios vividos lleva:");
    scanf("%f",&edad);
    edad_dias=edad*CONV_ANIOS_DIAS;
    printf("Usted lleva %f", edad_dias);
    printf(" dias vividos");
    getchar();
    getchar();
}