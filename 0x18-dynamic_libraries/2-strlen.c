#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: string parameter inputted
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int iCounter;

	for (iCounter = 0; *s != '\0'; ++s)
		++iCounter;

	return (iCounter);
}
