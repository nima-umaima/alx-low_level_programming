#include "main.h"
/**
 * _isalpha - checks for alphabet
 *@c: letter being tested
 * Return: 1(Success) 0(Not Success)
 */
int _isalpha(inc c)
{
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    return (1);
  else
    return (0);
}
