#include "main.h"

/**
 * *_strcat - function commute srtings
 *
 * @dest: pointer parameter to a char
 * @src: pointer parameter to a char
 *
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
