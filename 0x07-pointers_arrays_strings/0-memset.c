#include "main.h"
/**
 * memset - fills memory with a constant byte
 *@s: allocated memory
 *@b: char bytes
 *@n: number of spaces to fill
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
