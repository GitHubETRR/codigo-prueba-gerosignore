#include <stdio.h>

int main()
{
    float peso, costo_de_viaje;
    int tipo_de_viaje;
    printf("Bienvenido, ingrese 1 si el tipo de viaje es corto y 2 si es largo:");
    scanf("%d",&tipo_de_viaje);
    printf("Ingrese el peso de la mercaderia:");
    scanf("%f",&peso);
    if((tipo_de_viaje<1) || (tipo_de_viaje>2))
    {
        printf("No ha ingresado un tipo de viaje valido");
    }
    else
    {
        if(tipo_de_viaje==1)
        {
            if(peso>20)
            {
                costo_de_viaje=1500+(peso-20)*800;
            }
            else
            {
                costo_de_viaje=1500;
            }
        }
        else
        {
            if(peso>20)
            {
                costo_de_viaje=2000+(peso-20)/5*800;
            }
            else
            {
                costo_de_viaje=2000;
            }
        }
        printf("El costo de su viaje es de %f pesos", costo_de_viaje);
    }
    getchar();
    getchar();
}