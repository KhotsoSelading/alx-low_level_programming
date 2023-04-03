#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 *
 * @head: head of a list.
 * @index: index of list where the node is deleted.
 *
 * Return: -1 if it failed, 1 if it succeeded.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *next, *prev = *head;

	if (index != 0)
	{
		for (i = 0; i < (index - 1) && (prev != NULL); i++)
			prev = prev->next;
	}

	if (prev == NULL || ((prev->next == NULL) && (index != 0))
		return (-1);

	next = prev->next;

	if (index == 0)
	{
		free(prev);
		*head = next;
	}
	else
	{
		prev->next = next->next;
		free(next);
	}

	return (1);
}
