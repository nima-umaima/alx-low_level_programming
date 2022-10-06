#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinates two strings
 *@s1: string to concatinate to
 *@s2: string to concatinate
 * Return: pointed to allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *s;
if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
;
else
{
for (j = 0; s2[j]; j++)
;
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1))
if (s == NULL)
return (NULL)
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[k + 1] = s2[k];
s[i + j] = '\0';
return (s);
}
