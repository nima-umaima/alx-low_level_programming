#include "main.h"
/**
* binary_to_uint - Converts a binary number to an unsigned int.
*@b: A pointer to a string of 0 and 1 chars.
* Return: If b is NULL or contains chars not 0 or 1 - 0.
* Otherwise - the converted number.
*/
unsigned int binary_to_uint(const char *b)
{
int len = 0, i;
unsigned int sum = 0;
if (b == NULL)
  return (sum);
while (b[len] != '\0')
len++;
len -= 1;
i = 0;
while (b[i])
{
if ((b[i] != '0') && (b[i] != '1'))
return (sum);
if (b[i] == '1')
sum += (1 * (1 << len));
i++;
len--;
}
return (sum);
}
