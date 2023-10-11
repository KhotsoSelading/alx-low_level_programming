#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches using the Jump search algorithm for a value in an
 * array of integers
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int m = sqrt(size), k = 0, prev = 0, index = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		k++;
		prev = index;
		index = k * m;

		if (index >= (int)size)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
