#include "lists.h"

/**
 * free_listint2 - frees linked list
 *
 * @head: head of a list
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *holder, *current;

	if (head != NULL)
	{
		current = *head;
		while ((holder = current) != NULL)
		{
			current = current->next;
			free(holder);
		}
		*head = NULL;
	}
}
