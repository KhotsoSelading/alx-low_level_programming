#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 apart
 *                 from 2 and 4 and you can
 *                 only use _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int iNum;

	for (iNum = 0; iNum <= 9; ++iNum)
	{
		if ((iNum == 2) || (iNum == 4))
			continue;
		_putchar(iNum + 48);
	}
	_putchar('\n');
}
