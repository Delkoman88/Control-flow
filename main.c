#include <stdio.h>
#include <stdlib.h>
//if else challenge:
int main()
{

    int x = 5;
    int y;
    printf("Adivina el numero entre 1 y 10 que estoy pensando:  ");
    scanf("%i", &y, "\n \n");

    if (x == y)
    {
        printf("\n WOW, adivinaste!!!! \n \n");
    }
    else
    {
        printf("\n Ese no es, perdiste! \n \n");
    }
    return 0;
}
