#include <stdio.h>

int main()
{
    int numero, cifra1, cifra2, cifra3, cifra4;
    printf("Bienvenido, ingrese un numero entero de 4 digitos:");
    scanf("%d",&numero);
    cifra1=numero/1000;
    cifra2=(numero-cifra1*1000)/100;
    cifra3=(numero-cifra1*1000-cifra2*100)/10;
    cifra4=numero-cifra1*1000-cifra2*100-cifra3*10;
    if((numero/10000>=1) || (numero/100<10))
        printf("Su numero no es de 4 digitos");
    else
    {
        if((cifra1==cifra4) && (cifra2==cifra3))
            printf("Su numero es capicua");
        else
            printf("Su numero no es capicua");
    }
    getchar();
    getchar();
}