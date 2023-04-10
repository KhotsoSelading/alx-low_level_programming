#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another number
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, iCounter;
	unsigned long int spot, particular;

	iCounter = 0;
	particular = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		spot = particular >> i;
		if (spot & 1)
			iCounter++;
	}

	return (iCounter);
}
