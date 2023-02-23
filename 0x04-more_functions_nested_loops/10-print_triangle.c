#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0. (Success)
*/

void print_triangle(int size)
{
	int tHeight, tBase;

	if (size <= 0)
		_putchar('\n');
	for (tHeight = 1; tHeight <= size; ++tHeight)
	{
		for (tBase = 1; tBase <= size; ++tBase)
		{
			if ((tHeight + tBase) <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
