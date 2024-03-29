#include "lists.h"

/**
 * print_list - print elements in the linked list
 *
 * @h: pointer to head (first node)
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t numElements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numElements++;
	}
	return (numElements);
}
