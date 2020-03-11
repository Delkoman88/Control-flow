#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Encontrar el numero mas grande de un arreglo: \n \n");
//Se declaran las variables
    int x;
    int mayor;
//Se pide el tamaño del arreglo
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%i", &x);
    int integerArray[x];

//Se piden los valores del arreglo
    printf("\n Ingresa los %i valores del arreglo: \n \n", x);
//Se guardan los valores en el arreglo
    for (int i = 0; i < x; i++)
    {
        printf("Valor [%i]: ", i);
          scanf ("%i", &integerArray[i]);
    }
//Se comparan los valores entre si
    for (int a = 0; a < x; a++)
    {
        if (integerArray[a] > integerArray[a + 1])
            integerArray[a + 1] = integerArray[a];

    mayor = integerArray[a];
    }
//se imprime el numero mayor
    printf("\n El numero mayor en el arreglo es: %i \n", mayor);


    return 0;
}
