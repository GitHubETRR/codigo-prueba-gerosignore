#include <stdio.h>

int main()
{
    int nota;
    printf("Bienvenido, ingrese el promedio del alumno:");
    scanf("%d",&nota);
    if(nota==10)
    {
        printf("El alumno obtuvo un promedio sobresaliente");
    }
    if(nota==9 || nota==8)
    {
        printf("El alumno obtuvo un promedio distinguido");
    }
    if(nota==7 || nota==6)
    {
        printf("El alumno obtuvo un buen promedio");
    }
    if(nota==5 || nota==4)
    {
        printf("El alumno obtuvo un promedio aprovatorio");
    }
    if(nota==3 || nota==2 || nota==1)
    {
        printf("El alumno obtuvo un promedio reprovatorio");
    }
    if(nota<1 || nota>10)
    {
        printf("El promedio del alumno no es valido");
    }
    getchar();
    getchar();
}