#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 *@s: strint to be reversed
 */
void print_rev(char *str)
{
int len = 0, i;
while (str[i++])
len++;
for (i = len - 1; i >= 0; i--)
_putchar(str[i]);
_putchar('\n');
}
