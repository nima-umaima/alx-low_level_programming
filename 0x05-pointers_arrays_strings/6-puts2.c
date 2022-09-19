#include "main.h"
/**
 * puts - prints only one character out of two
 * @str: input
 * Return: print
 */
void puts(char *str)
{
int n = 0;
for (; str[n] != '\0'; n++)
{
  if ((n % 2) == 0)
_putchar(str[n]);
else
continue;
}
 _putchar('\n');
}
