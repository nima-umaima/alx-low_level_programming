#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
  char c;
  for(c = 'a'; c <= 'z'; c++)
    {
      putchar(c);
    }
  putchar('\n');
}
