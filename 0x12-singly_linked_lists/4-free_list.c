#include <stdlib.h>
#include "lists.h"
/**
* free_list - frees a list_t list
*@head: pointer to the start of the list
* Return: void
*/
void free_list(list_t *head)
{
list_t *tmp;
tmp = head;
while (head != NULL)
{
tmp = head;
head = tmp->next;
free(tmp->str);
free(tmp);
}
}
