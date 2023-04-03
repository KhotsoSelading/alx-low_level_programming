#include "lists.h"

/**
 * free_listint2 - function that frees the list and sets head to NULL
 *
 * @head: points to the first node
 *
 * Return: no return
*/

void free_listint2(listint_t **head)
{
	listint_t *iHolder, *currentNode;

	/*
	 * if head is not NULL, sets current to head, then iterates list
	 * using iHolder as a swapping variable that sets next node
	 * to current, then frees it at the end
	 */

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
