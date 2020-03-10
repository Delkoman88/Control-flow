#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Encontrar el numero mas grande de un arreglo: \n \n");

    int x;

    printf("Ingresa el tamaño del arreglo: ");
    scanf("%i", &x);
    int integerArray [x];


    printf("Ingresa los (%i) valores del arreglo: \n", x);

    for (int i = 0; i < x; i++)
    {
        printf("Valor [%i]: ", i);
          scanf ("%i", &integerArray[i]);
    }

        if integerArray[i] >



    return 0;
}
