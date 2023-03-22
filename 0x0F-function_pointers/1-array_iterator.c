#include "function_pointers.h"

/**
 * array_iterator - function that executing a function
 *                  as a parameter on each element of an array
 *
 * @array: array that iterates.
 * @size: size of array.
 * @action: pointer to function.
 *
 * Return: empty if @array and @action is NULL
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
