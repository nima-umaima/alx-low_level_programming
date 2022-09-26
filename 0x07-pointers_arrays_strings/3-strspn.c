#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: character to print
 *@accept: character
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
int j;
unsigned int count = 0;
for (; *s != '\0'; s++)
{
j = 0;
while (accept[j] != '\0')
{
if (*s == accept[j])
{
++count;
break;
}
j++;
}
if (accept[j] == '\0')
{
return (count);
}
return (count);
}
