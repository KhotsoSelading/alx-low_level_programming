#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 *
 * @b: binary.
 *
 * Return: an unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int iBase = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0')
			return (0);
		if (b[i] > '1')
			return (0);
		iBase = 2 * iBase + (b[i] - '0');
	}

	return (iBase);
}
