#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 *
 * @h: head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t the_nodes = 0;

	while (h)
	{
		the_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (the_nodes);
}
