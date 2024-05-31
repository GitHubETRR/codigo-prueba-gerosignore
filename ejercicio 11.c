#include <stdio.h>

int main ()
{
    float medcm,medin;
    int medpies;
    printf("bienvenido, ingrese su medida en centimetros");
    scanf("%f",&medcm);
    medpies=medcm/30.48;
    medin=medcm/2.54-medpies*12;
    printf("Su medida en pulgadas es: %f\n",medin);
    printf("Su medida en pies es: %d",medpies);
    getchar();
    getchar();
}