#include "variadic_functions.h"

/**
 * print_numbers - a function printing numbers, followed by a new line.
 *
 * @separator: pointer to a separator
 * @n: start of inputted variables
 *
 * Return: no return
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vList;
	unsigned int i;

	va_start(vList, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vList, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vList);
}
