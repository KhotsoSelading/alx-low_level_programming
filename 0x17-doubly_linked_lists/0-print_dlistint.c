#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 *
 * @h: head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	
	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	
	return count;
}