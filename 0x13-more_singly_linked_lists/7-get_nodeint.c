#include "lists.h"

/**
 * get_nodeint_at_index - function to get node
 * at *index nth from a linked list
 *
 * @head: points to the first node of the list
 * @index: numbers of node to access
 *
 * Return: node at nth index OR NULL if node doesn't exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iCount;

	/*
	 * iterate through nodes in list till the index nth node
	 * then return head.
	 */
	for (iCount = 0; (iCount < index) && (head != NULL); iCount++)
	{
		head = head->next;
	}

	return (head);
}
