#include "main.h"

/**
 * _strdup - returns a pointer to a new allocated memory space.
 *
 * @str: a string pointer variable.
 *
 * Return: pointer of an array of chars.
 */

char *_strdup(char *str)
{
	char *sOutput;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		; /*Calculates size */

	sOutput = (char *)malloc(sizeof(char) * (i + 1));

	if (sOutput == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		sOutput[j] = str[j];

	return (sOutput);
}
