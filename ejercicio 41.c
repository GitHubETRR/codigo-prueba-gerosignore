#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;
    printf("Bienvenido, ingrese el primer lado de su triangulo:");
    scanf("%f",&lado1);
    printf("Ingrese el segundo lado de su triangulo:");
    scanf("%f",&lado2);
    printf("Ingrese el tercer lado de su triangulo:");
    scanf("%f",&lado3);
    if(lado1>(lado2+lado3) || lado2>(lado1+lado3) || lado3>(lado1+lado2))
    {
        printf("Sus medidas no pueden formar un triangulo");
    }
    else
    {
        if((lado1==lado2) && (lado2==lado3))
        {
            printf("Su triangulo es equilatero");
        }
        else
        {
            if(lado1==lado2 || lado1==lado3 || lado2==lado3)
            {
                printf("Su triangulo es isosceles");
            }
            else
            {
                printf("Su triangulo es escaleno");
            }
        }
    }
    getchar();
    getchar();
}