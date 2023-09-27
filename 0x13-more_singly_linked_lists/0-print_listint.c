#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all parameters of the listint_t list
 * @h: a pointer to the head of the listint_t list
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
{
	nodes++;
	printf("%d\n", h->n);
	h = h->next;
}
return (nodes);
}
