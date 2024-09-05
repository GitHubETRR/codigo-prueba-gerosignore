#include <stdio.h>

int main()
{
    long int numero, a, numero_factorial=1;
    printf("Ingrese un numero entero no negativo: ");
    scanf("%d",&numero);
    if(numero<0)
    {
        printf("Su numero no es valido");
    }
    else
    {
        for(a=numero; a>0; a--)
        {
            numero_factorial=numero_factorial*a;
        }
        printf("%d factorial es igual a %d", numero, numero_factorial);
    }
    getchar();
    getchar();
}    