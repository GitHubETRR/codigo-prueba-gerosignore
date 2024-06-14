#include <stdio.h>

int main()
{
    float numero, numero2;
    unsigned int numero3, ultima_cifra;
    printf("Bienvenido, ingrese un numero entero positivo:");
    scanf("%f",&numero);
    numero2=numero/10;
    numero3=numero/10;
    ultima_cifra=(numero2-numero3+0.01)*10; /*+0.01 ya que la variable numero2 puede redondear para abajo*/
    printf("La ultima cifra de su numero es %d", ultima_cifra);
    getchar();
    getchar();
}