#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (new == NULL)
		return NULL;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return new;
	}

	for (current = *head; current->next != NULL; current = current->next)
	{
		/* Empty body */
	}
	
	current->next = new;
	new->prev = current;

	return (new);
}

