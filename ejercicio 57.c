#include <stdio.h>

int getMayorDeDos(void);

int main()
{
   int res;
   res=mayorDeDos();
   printf("el mayor es: %d", res);
}

int getMayorDeDos(void){
    int mayor;
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &num2);
    if(num1>num2){
        mayor=num1;
    }else{
        mayor=num2;
    }
    return mayor;
getchar();
getchar();
}