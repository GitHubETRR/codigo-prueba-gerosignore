#include <stdio.h>

int main()
{
    char char1, char2, char3, char4;
    printf("Ingresa el primer caracter: ");
    scanf(" %c", &char1);
    printf("Ingresa el segundo caracter: ");
    scanf(" %c", &char2);
    printf("Ingresa el tercer caracter: ");
    scanf(" %c", &char3);
    if(char1>char2)
    {
        char4=char1;
        char1=char2;
        char2=char4;
    }
    if(char1>char3)
    {
        char4=char1;
        char1=char3;
        char3=char4;
    }
    if(char2>char3)
    {
        char4=char2;
        char2=char3;
        char3=char4;
    }
    printf("Los caracteres ordenados son: %c %c %c", char1, char2, char3);
    getchar();
    getchar();
}