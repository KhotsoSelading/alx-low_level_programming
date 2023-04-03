#include "lists.h"

/**
 * free_listp - frees linked list
 *
 * @head: head of a linked list
 *
 * Return: no return
 */

void free_listp(listp_t **head)
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
 * print_listint_safe - prints linked list
 *
 * @head: head of a linked list
 *
 * Return: number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t numNodes;
	listp_t *new, *addPtr, *headPtr = NULL;

	for (numNodes = 0; head != NULL; numNodes++)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = headPtr;
		headPtr = new;

		addPtr = headPtr;

		while (addPtr->next != NULL)
		{
			addPtr = addPtr->next;
			if (head == addPtr->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&headPtr);
				return (numNodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free_listp(&headPtr);
	return (numNodes);
}
