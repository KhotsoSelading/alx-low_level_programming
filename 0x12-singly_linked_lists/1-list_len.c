#include "lists.h"

/**
 * list_len - gets number nodes
 *
 * @h: pointer to head (first node)
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t nElements;

	nElements = 0;
	while (h != NULL)
	{
		h = h->next;
		nElements++;
	}
	return (nElements);
}
