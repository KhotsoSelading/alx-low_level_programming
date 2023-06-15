#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 *
 * @head: head of list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_val;

	for (; head != NULL; head = tmp_val)
	{
		tmp_val = head->next;
		free(head);
	}
}

