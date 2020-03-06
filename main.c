#include <stdio.h>
#include <stdlib.h>
//Bidimensional arrays:
int main()
{
    printf("Arreglos bidimensionales: \n \n");

    int bidimensionalArray[4][4];

    bidimensionalArray [0][0] = 11;
    bidimensionalArray [0][1] = 12;
    bidimensionalArray [0][2] = 13;
    bidimensionalArray [0][3] = 14;

    bidimensionalArray [1][0] = 29;
    bidimensionalArray [1][1] = 28;
    bidimensionalArray [1][2] = 27;
    bidimensionalArray [1][3] = 29;

    bidimensionalArray [2][0] = 19;
    bidimensionalArray [2][1] = 18;
    bidimensionalArray [2][2] = 17;
    bidimensionalArray [2][3] = 19;

    bidimensionalArray [3][0] = 45;
    bidimensionalArray [3][1] = 46;
    bidimensionalArray [3][2] = 47;
    bidimensionalArray [3][3] = 48;

    printf("Valor en (0,1): %i \n", bidimensionalArray[0][0]);
    printf("Valor en (0,2): %i \n", bidimensionalArray[0][1]);
    printf("Valor en (0,3): %i \n", bidimensionalArray[0][2]);
    printf("Valor en (0,4): %i \n", bidimensionalArray[0][3]);

    return 0;
}
