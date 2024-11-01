#include <stdio.h>
#include <math.h>

void esPrimo(int num);

int main()
{
    int num;

    printf("Bienvenido ingrese un numero natural:");
    scanf("%d",&num);
    esPrimo(num);
    getchar();
    getchar();
}


void esPrimo(int num)
{
    int raiz, cont=0;
    float a,b;

    raiz=sqrt(num);
    do
    {
        a=num/raiz;
        b=(float)num/raiz;
        raiz--;
        cont++;
    }while (a!=b);
    raiz=sqrt(num);
    if(cont<raiz)
    {
        printf("Su numero no es primo");
    }
    else
    {
        printf("Su numero es primo");
    }
}