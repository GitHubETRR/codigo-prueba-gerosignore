#include <stdio.h>

int main()
{
    int numero, cifra1, cifra2, cifra3;
    printf("Bienvenido, ingrese un numero entero positivo de 3 cifras:");
    scanf("%d",&numero);
    cifra1=numero/100;
    cifra2=(numero-cifra1*100)/10;
    cifra3=numero-cifra1*100-cifra2*10;
    printf("La primera cifra de su numero es %d, la segunda %d y la tercera %d", cifra1, cifra2, cifra3);
    getchar();
    getchar();
}