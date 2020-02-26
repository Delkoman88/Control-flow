#include <stdio.h>
#include <stdlib.h>
//Ciclo For:
int main()
{
    printf("Iteradores For \n");

    int upperLim, bottomLim;

    printf("Imprimir en orden descendiente \n");

    printf("\n Ingresar limite superior: ");
    scanf("%i", &upperLim);

    printf("\n Ingresar limite inferior: ");
    scanf("%i", &bottomLim);

    for(int i = upperLim; i >= bottomLim; i--)

    {
        printf("El numero es: %i \n", i);
    }


    return 0;
}
