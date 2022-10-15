#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sums of all its parameters.
*@n: number of parameters
*Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list int_input;
va_start(int_input, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(int_input, int);
}
va_end(int_input);
return (sum);
}
