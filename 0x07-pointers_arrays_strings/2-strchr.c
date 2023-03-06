#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to string array inputted.
 * @c: character to locate from inputted array
 *
 * Return: first occurence of charatcer or null if not found
*/
 
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	if (*(s + x) == c)
		return (s + x);

	for (; *(s + x) != '\0'; x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	return ('\0');
}
