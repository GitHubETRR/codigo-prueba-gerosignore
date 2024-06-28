#include <stdio.h>

int main()
{
    float num; 
    int contadorpositivo=0, contadornegativo=-1;
    do
    {
        printf("Ingrese un numero:");
        scanf("%f",&num);
        if(num>0)
        {
            contadorpositivo++;
        }
        else
        {
            contadornegativo++;
        }
    }
    while(num!=0);
    printf("Usted ingreso %d numeros positivos y %d numeros negativos", contadorpositivo, contadornegativo);
    getchar();
    getchar();
}