#include <stdio.h>
#include <stdlib.h>
//Reto 1 operadores relacionales y logicos:
int main()
{
    float x;
    float y;
    printf("Si me das dos numeros enteros, te dare el menor entre ellos! \n \n");
    printf("Ingresa el primer numero:");
    scanf("%f", &x);

     printf("Ingresa el segundo numero:");
    scanf("%f", &y);

    if (x < y)
    {
        printf("\n El numero menor es: %f \n", x);
    }
    else
    {
        printf("\n El numero menor es: %f \n", y);
    }

    return 0;
}
