#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 *                           any given position
 *
 * @head: points to the first node of the list
 * @idx: index of the list where the new node should be added
 * @n: the element to add to the new node list
 *
 * Return: NULL if anything fails or the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *currentNode;

	currentNode = *head;

	if (idx != 0)
	{
		for (i = 0; (i < idx - 1) && (currentNode != NULL); i++)
		{
			currentNode = currentNode->next;
		}
	}

	if (currentNode == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx != 0)
	{
		new->next = currentNode->next;
		currentNode->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
