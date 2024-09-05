#include <stdio.h>

int main()
{
    float num1, num2,num3;
    printf("Bienvenido ingrese su primer numero:");
    scanf("%f",&num1);
    printf("Ingrese su segundo numero:");
    scanf("%f",&num2);
    printf("Ingrese su tercer numero:");
    scanf("%f",&num3);
    if((num1==num2) && (num1==num3))
    {
        printf("Sus tres numeros son iguales");
    }
    else
    {
        if((num1<=num2) && (num1<=num3))
        {
            printf("El menor numero es %f", num1);
        }
        else
        {
            if((num2<=num1) && (num2<=num3))
            {
                printf("El menor numero es %f", num2);
            }
            else
            {
                printf("El menor numero es %f", num3);
            }
        }
    }
    getchar();
    getchar();
}