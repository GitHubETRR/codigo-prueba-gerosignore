#include <stdio.h>

int main()
{
    float EDAD,EDADdias;
    printf("Bienvenido, ingrese cuantos anios vividos lleva:");
    scanf("%f",&EDAD);
    EDADdias=EDAD*365.25;
    printf("Usted lleva %f",EDADdias);
    printf(" dias vividos");
    getchar();
    getchar();
}