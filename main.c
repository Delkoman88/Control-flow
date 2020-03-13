#include <stdio.h>
#include <stdlib.h>

//Reto cadena de caracteres
int main()
{
    printf("Cadena de caracteres - imprimir invertida \n \n");

//Se declaran las variables y string
    char Charstr[100];
    int size;
//Se solicita la palabra
    printf("Ingresa una palabra: \n");
    gets(Charstr);
//Se asigna el tamaño de la palabra
     size = strlen(Charstr);
//Se imprime la palabra al derecho usando puts
    printf("\n La palabra ingresada es: ");
    puts(Charstr);
//Se imprime la palabra al revés usando iteradores
    printf("\n La palabra al reves es: ");
    for(int i = size -1 ; i > -1; i--)
    {
        printf("%c", Charstr[i]);
    }
    printf("\n\n");

    return 0;
}
