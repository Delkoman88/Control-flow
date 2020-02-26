#include <stdio.h>
#include <stdlib.h>
//Challenge using the for iterator to print fibonacci sequence until a user defined loop:
int main()
{
    printf("Serie Fibonacci \n");

    int a = 0;
    int b = 1;
    int vuelta;

//Solicitamos el limite de vueltas
    printf("Hasta que numero de vuelta te gustaria detenerte?: ");
    scanf("%i", &vuelta);

//Se realiza la sucecion de Fibonacci hasta la vuelta indicada previamente
    for(int i = 0; i <= vuelta; i++)

    {
        printf("El numero es: %i \n", a);
        a = a + b;
        b = a - b;
    }


    return 0;
}
