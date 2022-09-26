#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: memory to copy to
 *@src: memory to copy form
 *@n: content in byte to copy
 * Return: 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
