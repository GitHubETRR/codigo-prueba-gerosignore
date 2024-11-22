#include <stdio.h>

void tabla_de_multiplicar(int num)
{
    int resultado;
    for(int i=1; i<=10; i++)
    {
        resultado=num*i;
        printf("%d*%d=%d \n", num, i, resultado);
    }
}

int main()
{
    int num;

    printf("Bienvenido, ingrese un numero entero:");
    scanf("%d",&num);
    tabla_de_multiplicar(num);
    getchar();
    getchar();
}