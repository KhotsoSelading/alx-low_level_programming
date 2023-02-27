#include "main.h"

/**
 * _strcpy - copies a string from one pointer to another
 *	including \0 terminal null byte
 *
 * @src: string parameter input
 * @dest: destination of string
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int x, y = 0;

	for (x = 0; src[a] != '\0'; ++x)
	{
		dest[y] = src[x]; /*copying strings*/
		++y;
	}
	dest[y] = '\0';/*terminator*/

	return (dest);
}
