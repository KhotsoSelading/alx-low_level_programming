#include "lists.h"

/**
 * dlistint_len - returns number of elements of  double linked list
 *
 * @h: head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		nodes_count += 1;
		h = h->next;
	}

	return (nodes_count);
}
