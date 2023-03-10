#include "main.h"

/**
 * _strcpy - copies a string from one pointer to another
 *	terminating null byte (\0) inclusive.
 *
 * @src: string parameter input
 * @dest: copy destination of string.
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x]; /*copying*/
	}
	dest[x++] = '\0';

	return (dest);
}
