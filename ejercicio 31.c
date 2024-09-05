#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Bienvenido, ingrese su primer numero:");
    scanf("%d",&num1);
    printf("Ingrese su segundo numero:");
    scanf("%d",&num2);
    if(num1==num2)
    {
        printf("Su primer numero es igual a su segundo numero");
    }
    else
    {
        printf("Su primer numero es diferente a su segundo numero");
    }
    getchar();
    getchar();
}