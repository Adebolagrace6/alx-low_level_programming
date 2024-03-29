#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: pointer to list_t list to be freed
 * Return: nothing
 */

void free_list(list_t *head)
{
list_t *temp;

while ((temp = head) != NULL)
{
head = head->next;
free(temp->str);
free(temp);
}
}

