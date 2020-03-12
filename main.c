#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main()
{
    printf("Reto arreglos bidimensionales e iteradores \n \n");

    int IntegerArray[5][6];

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            IntegerArray[i][j] = (6 + rand() % (11-6));
            printf("(%i, %i) : %i \n", i, j, IntegerArray[i][j]);
        }
        for(int k = 5; k < 6; k++)
        {
            IntegerArray[i][k] = 0;
            printf("(%i, %i) : %i \n", i, k, IntegerArray[i][k]);
        }
    }

    return 0;
}
