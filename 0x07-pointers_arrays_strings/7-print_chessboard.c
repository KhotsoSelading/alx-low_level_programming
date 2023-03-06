#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
*/

void print_chessboard(char (*a)[8])
{
	unsigned int x, y = 0;

	for (x = 0; x < 64; x++)
	{
		if ((x % 8) == 0 && (x != 0))
		{
			y = x;
			_putchar('\n');
		}
		_putchar(a[x / 8][x - y]);
	}
	_putchar('\n');
}
