#include <stdio.h>
#include "1-main.c"

/**
 * main - print alphabet in lowercase
 * Return: 0
 */
print_alphabet(void)
{
  char c;
  for(c = 'a'; c <= 'z'; c++)
    {
      putchar(c);
    }
  putchar('\n');
}
