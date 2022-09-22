#include "main.h"
/**
 * _strcat - concatinates two strings
 *@dest: string to append to src
 *@src: string to appendby dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
