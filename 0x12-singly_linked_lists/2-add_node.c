#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node at the begining of the list
 * @head: double pointer to the list_t list
 * @str: new string
 *
 * Return: address of new element or NULL if incorrect
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int len = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

while (str[len])
len++;

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}
