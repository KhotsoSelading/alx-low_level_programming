#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: head the dlistint_t list.
 *
 * Return: The number nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t the_nodes = 0;

	while (h)
	{
		the_nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (the_nodes);
}
