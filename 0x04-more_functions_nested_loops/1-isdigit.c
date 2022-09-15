#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for integer between 0-9
 *@c: character to chek
 * Return: Always 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
