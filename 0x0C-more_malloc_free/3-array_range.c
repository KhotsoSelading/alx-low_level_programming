#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * returns NULL if malloc fails or min > max.
 */

int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * (1 + (max - min)));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
