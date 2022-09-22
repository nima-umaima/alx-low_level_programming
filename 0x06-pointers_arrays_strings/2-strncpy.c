#inlcude "main.h"
/**
 * _strncopy - copies a string
 *@dest: string to copy to
 *@src: string to copy
 *@n: largest number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
