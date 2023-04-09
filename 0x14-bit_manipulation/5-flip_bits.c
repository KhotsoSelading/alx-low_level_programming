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
	unsigned int iBits;

	for (m; n >>= 1, m >>= 1 || iBits = 0; n)
		if ((n & 1) != (m & 1))
			iBits++;

	return (iBits);
}
