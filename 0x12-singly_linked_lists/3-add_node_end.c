#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the list_t list
 * @str: string where new node is stored
 *
 * Return: address of the new element, or NULL if incorrect
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
int len = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

while (str[len])
len++;

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}

