#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int iPos, iSpace;

	for (iPos = 0; iPos <= n; ++iPos)
	{
		for (iSpace = 0; iSpace <= iPos; ++iSpace)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
