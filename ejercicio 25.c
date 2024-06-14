#include <stdio.h>

int main()
{
    float sueldo_basico=4500, horas_trabajadas, antiguedad, sueldo_neto;
    printf("Bienvenido, ingrese la cantidad de horas trabajadas:");
    scanf("%f",&horas_trabajadas);
    printf("Ingrese los anios de antiguedad:");
    scanf("%f",&antiguedad);
    sueldo_neto=sueldo_basico*horas_trabajadas*(1+2*antiguedad/100);
    printf("El sueldo neto es de %f pesos", sueldo_neto);
    getchar();
    getchar();
}