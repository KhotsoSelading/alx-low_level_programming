#include "variadic_functions.h"

/**
 * print_strings - a function to prints strings, followed by a new line
 *
 * @separator: pointer to a separator
 * @n: start of input variables
 *
 * Return: no return
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vList;
	char *str;
	unsigned int i;

	va_start(vList, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vList, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vList);
}
