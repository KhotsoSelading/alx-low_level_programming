#include "main.h"

/**
 * print_line - print a line
 *
 * @n: number of times the _ character
 *     is printed
*/

void print_line(int n)
{
	int cLine;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cLine = 1; cLine <= n; ++cLine)
			_putchar('_');
		_putchar('\n');
	}
}
