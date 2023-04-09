#include "main.h"

/**
 * print_binary - function to print the binary representation of numbers
 *
 * @n: an unsigned long int
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	int i, chars = 0;
	unsigned long int spot;

	for (i = 63; i >= 0; i--)
	{
		spot = n >> i;

		if (chars)
			_putchar('0');
		else if (spot & 1)
		{
			_putchar('1');
			chars++;
		}
	}
	if (!chars)
		_putchar('0');
}
