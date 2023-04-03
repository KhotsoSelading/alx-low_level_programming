#include "lists.h"

/**
 * reverse_listint - reverses linked list.
 * 
 * @head: head of a linked list
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pNode = NULL, *nNode = NULL;

	while (*head != NULL)
	{
		nNode = (*head)->next;
		(*head)->next = pNode;
		pNode = *head;
		*head = nNode;
	}

	*head = pNode;
	return (*head);
}
