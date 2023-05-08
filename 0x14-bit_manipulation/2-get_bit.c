#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a certain index
 *
 * @n: unsigned long int inputted
 * @index: index of the bit inputted
 *
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int iBit;

	if (index > 63)
		return (-1);

	iBit = (n >> index) & 1;

	return (iBit);
}
