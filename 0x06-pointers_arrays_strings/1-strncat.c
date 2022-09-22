#include "main.h"
/**
 * _strncat - concatinates two strings
 *@dest: string to append by src
 *@src: string to append to dest
 *@n: largest number of bytwss to append
 * Return: dest
 */
char *_strncat(cat *dest, char *src, int n)
{
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while(j < n && *(src +j))
{
*(dest + i) = *(src + j);
i++;
j++;
}
return (dest);}
