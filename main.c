#include <stdio.h>
#include <stdlib.h>
//Unidimensional array challenge:
int main()
{
//Se declaran las variables
    float Valor[5];
    float resultado;
 //Se piden los datos del arreglo
    printf("Ingresa 5 numeros: \n");
    scanf("%f%f%f%f%f", &Valor[0], &Valor[1], &Valor[2], &Valor[3], &Valor[4]);
//Se realiza la operacion y se guarda en resultado
    resultado = Valor[0]*Valor[1]*Valor[2]*Valor[3]*Valor[4];

//Se imprime el resultado

    printf("\n El resultado de todos los numeros multiplicados entre si es: %f \n", resultado);

    return 0;
}
