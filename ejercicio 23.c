#include <stdio.h>
#include <math.h>

int main()
{
    float lado1, lado2, lado3, s, area;
    printf("Bienvenido, ingrese la medida del primer lado del triangulo:");
    scanf("%f",&lado1);
    printf("Ingrese la medida del segundo lado del triangulo:");
    scanf("%f",&lado2);
    printf("Ingrese la medida del tercer lado del triangulo:");
    scanf("%f",&lado3);
    if((lado1>=lado2+lado3)||(lado2>=lado1+lado3)||(lado3>=lado1+lado2))
    {
        printf("Su triangulo no existe");
    }
    else
    {
        s=(lado1+lado2+lado3)/2;
        area=sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
        printf("El area de su triangulo es %f unidades cuadradas", area);
    }
    getchar();
    getchar();
}
