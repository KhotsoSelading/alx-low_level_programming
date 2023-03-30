#include "lists.h"

/**
 * add_node_end - adds a node at end of linked list
 *
 * @head: pointer to first node of the list
 * @str: string pointer to add
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *lHold;
	size_t numChar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (numChar = 0; str[numChar]; numChar++)
		;

	new->len = numChar;
	new->next = NULL;
	lHold = *head;

	if (lHold == NULL)
	{
		*head = new;
	}
	else
	{
		while (lHold->next != NULL)
			lHold = lHold->next;
		lHold->next = new;
	}

	return (*head);
}
