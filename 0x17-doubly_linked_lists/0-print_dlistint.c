#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 *
 * @h: head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		nodes_count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes_count);
}
