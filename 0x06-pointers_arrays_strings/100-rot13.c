#include "main.h"
/**
 * rot13 - encodes a string using rot13
 *@s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
int i, j;
char a[] = "";
char b[] = "";
for (i = o; *(s + i); i++)
{
for (j = o; j < 52; j++)
{
if (a[j] == *(s + i))
{
*(s + i) = b[j];
break;
}
}
}
return (s);
}
