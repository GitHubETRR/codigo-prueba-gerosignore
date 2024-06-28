#include <stdio.h>

int main()
{
    char caracter;
    printf("Bienvenido, ingrese su caracter:");
    scanf("%c",&caracter);
    if(caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u')
    {
        printf("Su caracter es una vocal");
    }
    else
    {
        printf("Su caracter es una consonante");
    }
    getchar();
    getchar();
}