#include <stdio.h>


int main()
{
    float cord_x, cord_y;

    int num_participante, num_disparo, tiros_al_blanco=0, cuadrante1=0, cuadrante2=0, cuadrante3=0, cuadrante4=0;
    for(num_participante=1; num_participante<=5; num_participante++)
    {
        for(num_disparo=1; num_disparo<=10; num_disparo++)
        {
            printf("Bienvenido participante numero %d, ingrese las cordenadas de su disparo numero %d en formato x y:", num_participante, num_disparo);
            scanf("%f %f",&cord_x,&cord_y);
            if(cord_x==0 && cord_y==0)
            {
                tiros_al_blanco++;
            }
            if(cord_x>0 && cord_y>0)
            {
                cuadrante1++;
            }
            if(cord_x<0 && cord_y>0)
            {
                cuadrante2++;
            }
            if(cord_x<0 && cord_y<0)
            {
                cuadrante3++;
            }
            if(cord_x>0 && cord_y<0)
            {
                cuadrante4++;
            }
        }
    } 
    printf("Hubo %d tiros al blanco \n", tiros_al_blanco);
    printf("Hubo %d tiros al primer cuadrante \n", cuadrante1);
    printf("Hubo %d tiros al segundo cuadrante \n", cuadrante2);
    printf("Hubo %d tiros al tercer cuadrante \n", cuadrante3);
    printf("Hubo %d tiros al cuarto cuadrante", cuadrante4);
    getchar();
    getchar();   
}