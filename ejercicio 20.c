#include <stdio.h>

int main()
{
    unsigned int segundos_solo, horas, minutos, segundos;
    printf("Binevenido, ingrese una cantidad de segundos:");
    scanf("%d",&segundos_solo);
    horas=segundos_solo/3600;
    minutos=(segundos_solo-horas*3600)/60;
    segundos=segundos_solo-horas*3600-minutos*60;
    if(segundos_solo>=86400)
    {
        printf("La cantidad entera de segundos es mayor a 86400");
    }
    else
    {    
        printf("Su cantidad de segundos es equivalente a %d horas %d minutos %d segundos", horas, minutos, segundos);
    }    
    getchar();
    getchar();
}