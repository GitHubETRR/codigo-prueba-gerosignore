#include <stdio.h>

int main()
{
    float num, contador=0, suma_num, prom;
    do    
    {
        printf("Ingrese un numero:");
        scanf("%f",&num);
        contador++;
        suma_num+=num;
    }
    while(num>=0);
    prom=(suma_num-num)/(contador-1);
    printf("El promedio de sus numeros es %f",prom);
    getchar();
    getchar();
}