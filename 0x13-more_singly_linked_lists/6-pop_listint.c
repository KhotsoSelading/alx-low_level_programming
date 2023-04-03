#include "lists.h"

/**
 * pop_listint - deletes head of node list
 *
 * @head: points to the first node in the list
 *
 * Return: head node's data
*/

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *iHolder, *currentNode;

	/*
	 * if list is empty return 0
	 * set head addr to holder, get addr of next node (current)
	 * frees head and sets head to second node
	 * returns the element of first node
	 */
	if (*head == NULL)
		return (0);

	currentNode = *head;

	hnode = currentNode->n;
	iHolder = currentNode->next;

	free(currentNode);
	*head = iHolder;

	return (hnode);
}
