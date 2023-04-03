#include "lists.h"

/**
 * print_listint - function that prints all elements of a list
 *
 * @h: points to first node
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t iNodes = 0;

	/* When h is not null, counts nodes*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		iNodes++;
	}

	return (iNodes);
}
