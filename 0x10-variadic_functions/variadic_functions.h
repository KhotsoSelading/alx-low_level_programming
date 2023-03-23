#ifndef Variadic_Functions_h
#define Variadic_Functions_h

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - A new struct that defines print
 *
 * @symbol: represents the data type
 * @print_func: a function pointer that prints a data type
*/

typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;

#endif /* Variadic_Functions_h */
