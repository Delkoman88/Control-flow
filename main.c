#include <stdio.h>
#include <stdlib.h>
//Reto 2:
int main()
{
    printf("Para saber si reprobaste o no, ingresa tu calificacion: ");
    //se definen las variables
    float x;

    //introducir la calificacion
    scanf("%f", &x);

    if (x < 6.0)
    {
        printf("\n Estas reprobado \n");
    }
    else if ((x >= 6.0) && (x <= 8.9))
    {
        printf("\n Estas aprobado \n");
    }
    else if(x >= 9.0)
    {
        printf("\n Excelente trabajo, aprobaste! n.n  \n");
    }


    return 0;
}
