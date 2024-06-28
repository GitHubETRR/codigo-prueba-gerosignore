#include <stdio.h>

int main()
{
    unsigned int hora1, hora2, hora_suma, minuto1, minuto2, minuto_suma, segundo1, segundo2, segundo_suma;
    printf("Bienvenido, ingrese su primer tiempo en formato HH MM SS:");
    scanf("%d %d %d",&hora1,&minuto1,&segundo1);
    printf("Ingrese su segundo tiempo en formato HH MM SS:");
    scanf("%d %d %d",&hora2,&minuto2,&segundo2);
    hora_suma=hora1+hora2;
    minuto_suma=minuto1+minuto2;
    segundo_suma=segundo1+segundo2;
    while(segundo_suma>=60){
        segundo_suma=segundo_suma-60;
        minuto_suma=minuto_suma+1;
    }
    while(minuto_suma>=60){
        minuto_suma=minuto_suma-60;
        hora_suma=hora_suma+1;
    }
    printf("La suma de sus 2 timepos es: %d horas %d minutos %d segundos",hora_suma,minuto_suma,segundo_suma);
    getchar();
    getchar();
}