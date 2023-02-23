#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: integer number to be printed.
*/

void print_number(int n)
{
	unsigned int iNum = n;

	if (n < 0)
	{
		_putchar('-');
		iNum = -iNum;
	}

	if ((iNum / 10) > 0)
		print_number(iNum / 10);

	_putchar((iNum % 10) + 48);
}
