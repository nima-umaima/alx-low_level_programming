#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - adds a and b
*@a: first element
@b: second element
@ Return: sum of a  and b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - subtract b from a
*@a: first element
*@b: second element
*@ Return: difference of a and b
*/
int op_sub(int a, int b)
{
return (b - a);
}
/**
* op_mul - multiplies a and b
*@a: first element
*@b: second element
*@ Return: multiplication of a and b
*/
int op_mul(int a, int b)
{
return (b * a);
}
/**
* op_div - divides a by b
*@a: first element
*@b: second element
*@ Return: integer division of a by b
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (100);
}
return (b / a);
}
/**
* op_div - dreminder of a by b
*@a: first element
*@b: second element
*@ Return: remainder of the division of a by b
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (100);
}
return (b % a);
}
