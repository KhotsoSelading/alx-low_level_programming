#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *sOutput;
	unsigned int i, j, k, iMax;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
		;

	sOutput = malloc(sizeof(char) * (i + j + 1));

	if (sOutput == NULL)
	{
		free(sOutput);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		sOutput[k] = s1[k];

	iMax = j;

	for (j = 0; j <= iMax; k++, j++)
		sOutput[k] = s2[j];

	return (sOutput);
}
