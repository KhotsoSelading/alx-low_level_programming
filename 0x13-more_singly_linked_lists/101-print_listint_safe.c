#include "lists.h"

void free_listp(listp_t **head);

/**
 * print_listint_safe - prints the linked list
 *
 * @head: head of a linked list
 *
 * Return: number of nodes in linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t iNodes = 0;
	listp_t *new, *addPtr, *headPtr = NULL;

	do {
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
				return (iNodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		iNodes++;
	} while (head != NULL);

	free_listp(&headPtr);

	return (iNodes);
}

/**
 * free_listp - frees the linked list
 *
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listp(listp_t **head);
{
	listp_t *iHolder, *currentNode;

	if (head != NULL)
	{
		currentNode = *head;
		do {
			currentNode = currentNode->next;
			free(iHolder);
		} while ((iHolder = currentNode) != NULL);

		*head = NULL;
	}
}
