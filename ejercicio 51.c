#include <stdio.h>
#include <math.h>

int main()
{
    int num1, suma=0, contador=0;
    printf("Bienvenido, ingrese un numero entero positivo:");
    scanf("%d",&num1);
    if(num1>0)
    {
        while(num1>0)
        {
            suma+=num1%10;
            num1 /=10;
        }
        printf("La suma de sus cifras del numero es: %d\n", suma);
    }
    else
    {
        printf("El numero ingresado no es un positivo entero");
    }
    getchar();
    getchar();
}