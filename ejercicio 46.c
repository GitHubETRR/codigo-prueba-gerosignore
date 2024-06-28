#include <stdio.h>

int main()
{
    int num, contador, resultado;
    printf("Bienvenido, ingrese un numero entero del 1 al 10:");
    scanf("%d",&num);
    if(num<1 || num>10)
    {
        printf("Su numero no es valido");
    }
    else
    {
        for(contador=1; contador<=10; contador=contador+1)
        {
            resultado=num*contador;
            printf("%d x %d = %d\n",contador, num, resultado);
        }
    }
    getchar();
    getchar();
}