#include <stdio.h>

int main()
{
    int primer_numero, segundo_numero, numero_entremedio;
    printf("Bienvenido, ingrse su primer numero:");
    scanf("%d",&primer_numero);
    printf("Ingrese su segundo numero (mayor al primero):");
    scanf("%d",&segundo_numero);
    if(primer_numero>=segundo_numero)
    {
        printf("Sus numeros no son validos");
    }
    else
    {
        for(numero_entremedio=primer_numero; numero_entremedio<=segundo_numero; numero_entremedio++)
        {
            printf("%d \n",numero_entremedio);
        }
    }
    getchar();
    getchar();
}