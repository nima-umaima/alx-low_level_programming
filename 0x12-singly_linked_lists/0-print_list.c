#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
*@h: pointer to the start of the list
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
unsigned int count = 0;
const list_t *tmp;
tmp = h;
while (tmp != NULL)
{
if (tmp->str)
{
printf("[%u] %s\n", tmp->len, tmp->str);
}
else
{
printf("[%u] %s\n", 0, "(nil)");
}
tmp = tmp->next;
count++;
}
return (count);
}
