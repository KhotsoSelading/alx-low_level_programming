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
	int x; /*counter variable*/

	for (x = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
