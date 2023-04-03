#include "lists.h"

/**
 * free_listint - frees list
 *
 * @head: points to the first node of the list
 *
 * Return: no return
*/

void free_listint(listint_t *head)
{
	listint_t *iHolder;

	/* iterates through nodes in list then sets head as next node */
	while ((iHolder = head) != NULL)
	{
		head = head->next;
		free(iHolder);
	}
}
