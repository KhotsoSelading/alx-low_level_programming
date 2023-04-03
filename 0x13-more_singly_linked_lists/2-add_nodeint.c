#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 *              beginning of a list
 *
 * @head: points to the first node
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	/* links first node in head with new node, the adds to list */
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
