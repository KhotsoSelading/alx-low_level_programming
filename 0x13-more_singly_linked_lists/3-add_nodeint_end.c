#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 *            at the end of the list
 *
 * @head: points to the first node of the list
 * @n: int element to add to new node
 *
 * Return: address of the new element or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new,  *iHolder;

	(void)iHolder;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	iHolder = *head;

	/* if head is NULL, place new node*/
	/* if head is not null, next is not null; therefore place new node at end*/
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		do {
			iHolder = iHolder->next;
		} while (iHolder->next != NULL);
		iHolder->next = new;
	}

	return (*head);
}
