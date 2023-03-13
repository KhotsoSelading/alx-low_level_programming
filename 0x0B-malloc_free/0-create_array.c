#include "main.h"

/**
 * create_array - creates an array of chars.
 *
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *cPointer;
	unsigned int iCount = 0;

	if (size == 0)
		return (NULL);

	cPointer = malloc(sizeof(c) * size);

	if (cPointer == NULL)
		return (NULL);

	while (iCount < size)
	{
		cPointer[iCount] = c;
		iCount++;
	}
	return (cPointer);
}
