#include <stdio.h>
#include <math.h>

int main()
{
    float cat1, cat2, hyp;
    printf("Bienvenido, ingrese la medida del primer cateto de su triangulo:");
    scanf("%f",&cat1);
    printf("Ingrese la medida del segundo cateto de su triangulo:");
    scanf("%f",&cat2);
    hyp=sqrt(pow(cat1,2)+pow(cat2,2));
    printf("La medida de la hipotenusa de su triangulo es: %f",hyp);
    getchar();
    getchar();
}