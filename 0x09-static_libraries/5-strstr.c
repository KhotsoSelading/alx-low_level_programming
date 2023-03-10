#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substring
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring.
 *         NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *x, *y;

	while (*haystack != '\0')
	{
		x = haystack;
		y = needle;

		while ((*haystack == *y) && (*haystack != '\0') && (*y != '\0'))
		{
			haystack++;
			y++;
		}
		if (!*y)
			return (x);
		haystack = x + 1;
	}
	return (0);
}
