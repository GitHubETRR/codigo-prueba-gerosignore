#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, divisores, contador=0;
    printf("Bienvenido, ingrese su numero:");
    scanf("%d",&num1);
    do
    {
        contador++;
        num2=num1/contador;
        if(num1==num2*contador)
        {
            printf("%d; ", contador);
        }
    }
    while(contador<=num1);
    getchar();
    getchar();
}