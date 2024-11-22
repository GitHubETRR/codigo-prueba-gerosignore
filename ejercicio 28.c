#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, Raiz1, Raiz2;
    printf("Bienvenido, ingrese el coeficiente de x^2:");
    scanf("%f",&A);
    printf("Ingrese el coeficiente de x^1:");
    scanf("%f",&B);
    printf("Ingrese el termino independiente:");
    scanf("%f",&C);
    if(B*B<4*A*C)
    {
        printf("Su polinomio no tiene raices reales");
    }
    else
    {
        Raiz1=(-B+sqrt(B*B-4*A*C))/2*A;
        Raiz2=(-B-sqrt(B*B-4*A*C))/2*A;
        printf("Las raices de su polinomio son %f y %f", Raiz1, Raiz2);
    }
    getchar();
    getchar();
}