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

	if (n <= 0)
		_putchar('\n');
	for (iPos = 1; iPos <= n; ++iPos)
	{
		for (iSpace = 1; iSpace <= iPos; ++iSpace)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
