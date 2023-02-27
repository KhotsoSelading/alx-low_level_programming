#include"main.h"

/**
 * puts_half - prints half the string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int iLen, n;

	for (iLen = 0; str[iLen] != '\0'; ++iLen)
		;

	if (iLen % 2 == 0)
	{
		for (n = iLen / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((iLen - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
