#include "main.h"

/**
 * print_numbers - print 0 - 9
 * 		only using _putchar twice.
 *
 * Return: Always 0. (Success)
*/

void print_numbers(void)
{
	int iNum = 0;

	do {
		_putchar(iNum + 48);
		iNum++;
	} while ((iNum >= 0) && (iNum <= 9));
	_putchar('\n');
}
