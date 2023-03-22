#include "function_pointers.h"

/**
 * int_index - function searching for an integer
 *
 * @array: pointer to array.
 * @size: size of @array.
 * @cmp: pointer to function call to 
 * 	check matching index in array
 *
 * Return: xth element if no matches,  -1 if size <= 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (x = 0; x < size; x++)
			if (cmp(array[x]))
				return (x);
	}

	return (-1);
}
