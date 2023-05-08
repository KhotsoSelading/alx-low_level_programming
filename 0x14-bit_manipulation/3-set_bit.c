#include "main.h"

/**
 * set_bit - sets a bit at a certain index to 1
 *
 * @n: a pointer to a number to change
 * @index: the index of the bit(s) to set to 1
 *
 * Return: -1 for failure. 1 for success.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
