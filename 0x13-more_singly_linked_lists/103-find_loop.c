#include "lists.h"

/**
 * find_listint_loop - finds the loop in the linked list
 *
 * @head: head of linked list
 *
 * Return: the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr2 = head, *oldPtr = head;

	do {
		head = head->next;
		ptr2 = ptr2->next->next;

		if (head == ptr2)
		{
			head = oldPtr;
			oldPtr =  ptr2;

			while (1)
			{
				ptr2 = oldPtr;

				while ((ptr2->next != head) && (ptr2->next != oldPtr))

					ptr2 = ptr2->next;

				if (ptr2->next == head)
					break;

				head = head->next;
			}

			return (ptr2->next);
		}
	} while (head && ptr2 && ptr2->next);

	return (NULL);
}
