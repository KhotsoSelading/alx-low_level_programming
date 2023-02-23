#include "main.h"

/**
 * print_diagonal - prints a diagonal line.
 *
 * @n: number of times the \ is printed.
*/

void print_diagonal(int n)
{
	int iPos, iSpace;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (iPos = 1; iPos <= n; ++iPos)
		{
			for (iSpace = 1; iSpace <= iPos; ++iSpace)
			{
				_putchar(' ');
			}
			_putchar(92); /*92 the ascii code for \ */
			_putchar('\n');
		}
	}
}

