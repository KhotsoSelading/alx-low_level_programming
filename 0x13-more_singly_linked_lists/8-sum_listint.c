#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 *              of a list.
 *
 * @head: points to the first node of the list
 *
 * Return: the sum of all data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	/*
	 * while iterating through list, increament sum using data
	 * if list is empty sum will be equal to 0
	*/
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
