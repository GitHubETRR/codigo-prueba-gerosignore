#include <stdio.h>

int main()
{
    unsigned int fecha, fecha_dia, fecha_mes, fecha_anio;
    printf("Bienvenido, ingrese una fecha en formato DDMMAAAA:");
    scanf("%d",&fecha);
    fecha_dia=fecha/1000000;
    fecha_mes=(fecha-fecha_dia*1000000)/10000;
    fecha_anio=fecha-fecha_dia*1000000-fecha_mes*10000;
    printf("Su fecha es el dia %d del mes de %d del anio %d\n", fecha_dia, fecha_mes, fecha_anio);
    getchar();
    getchar();
}