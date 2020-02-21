#include <stdio.h>
#include <stdlib.h>
//Condicional switch challenge:
int main()
{
   printf(" Estas en un callejon que termina en 3 caminos diferentes, elige por cual seguiras tu camino.  \n");

   char letra;

    printf("\n Escribe la letra a, b o c para elegir el camino a seguir: ");
   scanf ("%c", &letra);

   switch (letra)
   {
   case 'a':
    printf("\n El camino que elegiste te lleva directamente a una playa paradisiaca llena de todas las comodidades que jamas pudiste imaginar \n");
    break;

   case 'b':
    printf("\n Este camino te lleva directo a un bosque encantado lleno de peligros, pero si sobrevives te casaras con la princesa del reino \n");
    break;

   case 'c':
    printf("\n Este camino te lleva directo a un cofre lleno de lingotes de oro, disfruta tu nueva vida! \n");
    break;

   default:
    printf("\n Elegiste una opcion invalida, has muerto de inmediato! \n");
    break;

   }

    return 0;
}
