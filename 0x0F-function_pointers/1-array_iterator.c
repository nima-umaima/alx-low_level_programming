#include "function_pointers.h"
/**
* array_iterator - executes a given parameter
* on each element of an array
*@array: the array
*@size: array size
*@action: function pointer
* Return: no return value
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}
