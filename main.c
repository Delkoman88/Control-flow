#include <stdio.h>
#include <stdlib.h>
//Do-While iterator challenge:
int main()
{
    printf("Reto, imprimir los primeros 100 numeros naturales usando do-while \n");

    int x = 0;
    int y = 100;

    do
    {
        x++;
        printf("\n %i", x);
    }while(x != y);

    return 0;
}
