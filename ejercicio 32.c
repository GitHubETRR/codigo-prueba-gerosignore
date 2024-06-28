#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Bienvenido, ingrese un numero:");
    scanf("%f",&num1);
    num2=num1/2;
    if(num1==num2*2)
    {
        printf("Su numero es par");
    }
    else
    {
        printf("Su numero es impar");
    }
    getchar();
    getchar();
}