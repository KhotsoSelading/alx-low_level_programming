#include "main.h"

/**
 * clear_bit - a function to set the value of a bit to 0 at a certain index
 *
 * @n: a pointer of an unsigned long int
 * @index: the index of the bit
 *
 * Return: -1 if it worked. -1 if it didn't work
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
