#include "main.h"
/**
 * string - changes lower case to upper case
 *@s: string to change
 * Return: address of s
 */
char *string_toupper(char *)
{
int i = 0;
while (*(s + i))
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
*(s + i) -= 'a' - 'A';
i++;
}
return (s);
}
