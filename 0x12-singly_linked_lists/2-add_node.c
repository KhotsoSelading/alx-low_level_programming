#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: pointer to first node of list
 * @str: string pointer that adds to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t numChar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (numChar = 0; str[numChar]; numChar++)
		;

	new->len = numChar;
	new->next = *head;
	*head = new;

	return (*head);
}
