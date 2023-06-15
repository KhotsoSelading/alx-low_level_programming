#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 *
 * @h: head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return count;

	for (; h->prev != NULL; h = h->prev)
	{
		/* Empty body */
	}

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return count;
}

