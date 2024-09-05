#include <stdio.h>

#define CONV_CM_FT 30.48
#define CONV_CM_IN 2.54
#define CONV_FT_IN 12

int main ()
{
    float med_cm,med_in;
    int med_ft;
    printf("bienvenido, ingrese su medida en centimetros:");
    scanf( "%f",&med_cm);
    med_ft=med_cm/CONV_CM_FT;
    med_in=med_cm/CONV_CM_IN-med_ft*CONV_FT_IN;
    printf("Su medida en pulgadas es: %f\n",med_in);
    printf("Su medida en pies es: %d",med_ft);
    getchar();
    getchar();
}