#include <stdio.h>

int main()
{
    float num1;
    int num2, num3;
    printf("Bienvenido, ingrese un numero:");
    scanf("%f",&num1);
    num2=num1/2;
    num3=num2*2;
    if(num1==num3)
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