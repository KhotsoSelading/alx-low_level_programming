#include "variadic_functions.h"

/**
 * print_all - function to print all
 *
 * @format: param
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *str;
	va_list vList;

	va_start(vList, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vList, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(vList, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(vList, double));
				j = 0;
				break;
			case 's':
				str = va_arg(vList, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vList);
}
