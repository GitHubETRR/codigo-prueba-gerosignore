#include <stdio.h>

int main()
{
    float lado1,lado2,super,per;
    printf("Bienvenido, ingrese el valor del primer lado del rectangulo:");
    scanf("%f",&lado1);
    printf("Ingrese el valor del segundo lado del rectangulo:");
    scanf("%f",&lado2);
    super=lado1*lado2;
    per=2*lado1+2*lado2;
    printf("El valor del perimetro del rectangulo es:%f\n",per);
    printf("El valor de la superficie del rectangulo es:%f",super);
    getchar();
    getchar();
}