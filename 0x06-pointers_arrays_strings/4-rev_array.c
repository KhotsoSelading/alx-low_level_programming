#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array parameter
 * @n: num elements of the array.
 * Return: void function, no return.
 */

void reverse_array(int *a, int n)
{
	int i, j, iHolder;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			iHolder = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = iHolder;
		}
	}
}
