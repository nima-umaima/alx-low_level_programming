#include "main.h"
/**
* check_prime - num
* @n: number
* @c: check if is prime
* Return: check_prime
*/
int check_prime(int n, int c)
{
if (n <= 1)
{
return (0);
}
if (n % c == 0)
{
return (0);
}
if (c == n / 2)
{
return (1);
}
return (check_prime(n, c + 1));
}
/**
* is_prime_number - check if a num is prime
* @n: number
* Return: is_prime_number
*/
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
