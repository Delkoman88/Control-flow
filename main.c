#include <stdio.h>
#include <stdlib.h>
//Bidimensional arrays challenge:
int main()
{
printf("Reto usando arreglos bidimensionales: \n \n");
//Variables are declared
    float suma1;
    float suma2;
    float suma3;

//bidimensional array
    float bidimensionalArray[3][4] =
    {
        {1,1,1,1},
        {2.5,2.5,2.5,2.5},
        {6.5,6.5,6.5,6.5}
    };

//sums are made
    suma1 = bidimensionalArray[0][0] + bidimensionalArray[0][1] + bidimensionalArray[0][2] + bidimensionalArray[0][3];
    suma2 = bidimensionalArray[1][0] + bidimensionalArray[1][1] + bidimensionalArray[1][2] + bidimensionalArray[1][1];
    suma3 = bidimensionalArray[2][0] + bidimensionalArray[2][1] + bidimensionalArray[2][2] + bidimensionalArray[2][3];

//print results
    printf("La sumatoria de la primer fila es: %f \n", suma1);
    printf("La sumatoria de la primer fila es: %f \n", suma2);
    printf("La sumatoria de la primer fila es: %f \n", suma3);

    return 0;
}
