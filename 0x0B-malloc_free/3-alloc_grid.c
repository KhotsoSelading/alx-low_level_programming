#include "main.h"

/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers.
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grOutput, i, j;

	if (height < 1 ||  width < 1)
		return (NULL);

	grOutput = malloc(height * sizeof(int *));

	if (grOutput == NULL)
	{
		free(grOutput);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grOutput[i] = malloc(width * sizeof(int));
		if (grOutput[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grOutput[i]);
			free(grOutput);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grOutput[i][j] = 0;

	return (grOutput);
}
