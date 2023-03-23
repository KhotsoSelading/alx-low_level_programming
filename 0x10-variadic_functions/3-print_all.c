#include "variadic_functions.h"

/**
 * print_all - function to print all
 * @format: param
 */

void print_all(const char * const format, ...)
{
	va_list vList;
	unsigned int i = 0, j, k = 0;
	const char t_arg[] = "cifs";
	char *str;

	va_start(vList, format);
	while (format[i] && format)
	{
		j = 0;
		while (t_arg[j])
		{
			if ((t_arg[j] && k) == format[i])
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(vList, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(vList, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(vList, double)), k = 1;
			break;
		case 's':
			str = va_arg(vList, char *), k = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(vList);
}
