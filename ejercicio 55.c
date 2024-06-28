#include <stdio.h>


int main() 
{
   int num1, num2;
   char opcion;


   printf("Ingrese el primer numero: ");
   scanf("%d", &num1);


   printf("Ingrese el segundo numero (debe ser mayor que el primero): ");
   scanf("%d", &num2);


   if(num1 >= num2) {
       printf("El segundo numero debe ser mayor que el primero. Reinicie el programa.\n");
   }

   printf("Ingrese 'I', 'i', 'P' o 'p' para seleccionar pares o impares: ");
   scanf(" %c", &opcion);


   if(opcion != 'I' && opcion != 'i' && opcion != 'P' && opcion != 'p') {
       printf("Letra ingresada no valida. Reinicie el programa.\n");
       return 1;
   }


   if (opcion == 'P' || opcion == 'p') {
       printf("Numeros pares entre %d y %d:\n", num1, num2);
       for(int i = num1; i <= num2; i++) {
           if(i % 2 == 0) {
               printf("%d \n", i);
           }
       }
   } 
   else { // impares
       printf("Numeros impares entre %d y %d:\n", num1, num2);
       for(int i = num1; i <= num2; i++) {
           if(i % 2 != 0) {
               printf("%d \n", i);
           }
       }
   }
    getchar();
    getchar();
}   
   
