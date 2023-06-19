#include "main.h"

/**
 * _strcmp - function to compare two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s2 + i) == '\0') && (*(s1 + i) == '\0'))
		{
			break;
		}
		op = *(i + s1) - *(i + s2);
		i++;
	}

	return (op);
}
