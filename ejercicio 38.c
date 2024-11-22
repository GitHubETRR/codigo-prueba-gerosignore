#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    char operacion;
    printf("Bienvenido, ingrese la primera letra de la operacion basica matematica que quiera realizar:");
    scanf("%c",&operacion);
    printf("Ingrese el primer numero de la opercion:");
    scanf("%f",&num1);
    printf("Ingrese el segundo numero de la operacion:");
    scanf("%f",&num2);
    if(operacion=='s')
    {
        resultado=num1+num2;
    }
    if(operacion=='r')
    {
        resultado=num1-num2;
    }
    if(operacion=='m')
    {
        resultado=num1*num2;
    }
    if(operacion=='d' && num2==0)
    {
        printf("Su resultado es una division por cero");
    }
    if(operacion=='d' && num2!=0)
    {
        resultado=num1/num2;
    }
    if(operacion=='s' || operacion=='r' || operacion=='m' || (operacion=='d' && num2!=0))
    {
        printf("El resultado de su operacion es %f", resultado);
    }
    getchar();
    getchar();
}