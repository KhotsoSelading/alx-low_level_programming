#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 *
 * @h: points to the first node
 *
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t iNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		iNodes++;
	}
	return (iNodes);
}
