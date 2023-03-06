#include "main.h"

/**
 * _strpbrk - a function that searches a
 *            string for any of a set of bytes.
 *
 * @s: pointer to string input
 * @accept: pointer to string searched
 *         in @s
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no byte is found
*/
 
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}
	return ('\0');
}
