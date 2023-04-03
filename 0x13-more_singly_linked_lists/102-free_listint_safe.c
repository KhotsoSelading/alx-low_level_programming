#include "lists.h"

/**
 * free_listp2 - frees a linked list
 *
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *holder, *current;

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

/**
 * free_listint_safe - frees linked list
 *
 * @h: head of linked list
 *
 * Return: size of linked list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t numNodes;
	listp_t *new, *addPtr, *headPtr = NULL;
	listint_t *current;

	for (numNodes = 0; *h != NULL; numNodes++)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = headPtr;
		headPtr = new;

		addPtr = headPtr;

		while (addPtr->next != NULL)
		{
			addPtr = addPtr->next;
			if (*h == addPtr->p)
			{
				*h = NULL;
				free_listp2(&headPtr);
				return (numNodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
	}

	*h = NULL;
	free_listp2(&headPtr);
	return (numNodes);
}
