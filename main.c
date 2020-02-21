#include <stdio.h>
#include <stdlib.h>
//Condicional switch:
int main()
{
   printf("Condicional switch \n");

   int option;

    printf("\n Introduce un numero del 1 al 3: ");
   scanf ("%i", &option);

   switch (option)
   {
   case 1:
    printf("\n Elegiste el numero 1 \n");
    break;

   case 2:
    printf("\n Elegiste el numero 2 \n");
    break;

   case 3:
    printf("\n Elegiste el numero 3 \n");
    break;

   default:
    printf("\n Elegiste una opcion invalida \n");
    break;

   }

    return 0;
}
