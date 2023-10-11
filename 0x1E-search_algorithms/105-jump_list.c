#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *last = list;
	size_t i = 0, k = 0, last_j = 0, j = sqrt(size);

	if (!list)
		return (NULL);

	while (list->n < value)
	{
		for (last_j = i, last = list, k = 0; list->next && k < j; k++)
		{
			list = list->next;
			i++;
		}
		printf("Value checked at index [%lu] = [%d]\n", i, list->n);
		if (!list->next)
			break;
	}

	if (!list->next)
		j = last_j;
	else
		j = i >= j ? i - j : 0;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	i = i >= size ? size - 1 : i;
	list = last;
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", j, list->n);
		if (list->n == value)
			return (list);
		j++;
		list = list->next;
	}
	return (NULL);
}
