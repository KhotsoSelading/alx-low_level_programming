#include "lists.h"

/**
 * reverse_listint - reverses linked list
 *
 * @head: head of a list
 *
 * Return: the pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;

	do {
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	} while (*head != NULL);

	*head = p;

	return (*head);
}
