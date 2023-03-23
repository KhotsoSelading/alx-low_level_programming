#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters
 *
 * @n: inputted variables start point
 *
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list vList;
	unsigned int i, sum = 0;

	va_start(vList, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vList, int);

	va_end(vList);

	return (sum);
}
