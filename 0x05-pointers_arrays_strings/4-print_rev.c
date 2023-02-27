#include"main.h"

/**
 * print_rev - prints a string in reverse format
 *
 * @s: string parameter inputted
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int i;

	/*finds the length of string without null character*/
	for (i= 0; s[i] != '\0'; ++i)
		;

	for (--i; i >= 0; --i)
		_putchar(s[i]);
	_putchar('\n');
}

