#include <stdio.h>

int main ()
{
    float medcm,medin,medpies;
    printf("bienvenido, ingrese su medida en centimetros");
    scanf("%f",&medcm);
    medin=medcm/2.54;
    medpies=medcm/30.48;
    printf("Su medida en pulgadas es: %f\n",medin);
    printf("Su medida en pies es: %f",medpies);
    getchar();
    getchar();
}