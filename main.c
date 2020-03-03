#include <stdio.h>
#include <stdlib.h>
//Do-While iterator:
int main()
{
    printf("Iterador Do while \n");

    char answer = 'q';
    char value;

    do
    {
        printf("Ingresa una letra: ");
        scanf("%c", &value);
        printf("\n");
    }while(value != answer);

    printf("Coinciden las letras %c == %c ", value, answer);

    return 0;
}
