#include <stdio.h>

#define SUMA_ANG_TRI 180
int main()
{
    float ang1,ang2,ang3;
    printf("Bienvenido ingrese el valor del primer angulo del traingulo:");
    scanf("%f",&ang1);
    printf("ingrese el valor del segundo angulo del triangulo:");
    scanf("%f",&ang2);
    ang3=SUMA_ANG_TRI-ang1-ang2;
    printf("El valor del tercer angulo del triangulo %f grados",ang3);
    getchar();
    getchar();
}   

