#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto arreglos bidimensionales e iteradores \n \n");

    int IntegerArray[5][6];

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            IntegerArray[i][j] = ((i+j) * 100 + j);
            printf("(%i, %i) : %i \n", i, j, IntegerArray[i][j]);

        }
    }

    return 0;
}
