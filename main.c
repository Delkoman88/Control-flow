#include <stdio.h>
#include <stdlib.h>
//While loops:
int main()
{
  printf("Iterador while \n");

  int limit;

  scanf("%i", &limit);

  int i = 1;

  while(i <= limit)
  {
      printf("Numero: %i \n", i);
      i++;
  }

    return 0;
}
