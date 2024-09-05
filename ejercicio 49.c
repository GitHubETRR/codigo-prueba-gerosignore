#include <stdio.h>
#include <math.h>

int main()
{
   int contador=0, potencia_de_2;
   do
   {
        contador++;
        potencia_de_2=pow(2, contador);
        printf("2^%d = %d \n", contador, potencia_de_2);
   } 
   while(contador<=19);
   getchar();
   getchar();
}
