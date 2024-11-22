#include <stdio.h>

int main()
{
    float temp_celcius, temp_fahrenheit;
    printf("Bienvenido, Ingrese su temperatura en grados celcius:");
    scanf("%f",&temp_celcius);
    temp_fahrenheit=1.8*temp_celcius+32;
    printf("Su temperatura en grados fahrenheit es de %f grados fahrenheit", temp_fahrenheit);
    getchar();
    getchar();
}