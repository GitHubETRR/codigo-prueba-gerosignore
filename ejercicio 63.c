#include <stdio.h>

void multiplo(int num, int div)
{
    int resto;

    resto=num%div;
    if(resto==0)
    {
        printf("Verdadero");
    }
    else 
    {
        printf("%d no es divisible por %d", num, div);
    }
}

int main()
{
    int num1, num2;

    printf("Bienvenido, ingrese su primer numero:");
    scanf("%d",&num1);
    printf("Bienvenido ingrese su segundo numero:");
    scanf("%d",&num2);
    multiplo(num1, num2);
    getchar();
    getchar();
}