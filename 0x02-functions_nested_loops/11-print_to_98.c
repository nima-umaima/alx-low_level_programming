#include "main.h"
/**
 * print_to_98 - Print natural numbers fro n to 98
 *@n: starting point
 *  Return: ALways 0
 */
void print_to_98()
{
  if (n <= 98)
    {
      for (n = n; n <= 97; n++)
	printf("%d, ", n);
    }
  else
    for (n = n; n > 98; n--)
      printf("%d, ", n);
  printf("98\n");
}
