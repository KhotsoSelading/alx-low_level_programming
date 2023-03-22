#include "3-calc.h"

/**
 * get_op_func - get ops function pointers of array char
 *               that accepts two inputs of int data type
 *
 * @s: a character pointer pointing to a argument symbol
 *
 * Return: one of the operator functions to do calculations
*/

int (*get_op_func(char *s))(int, int)
{
	int x;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (x = 0; x < 5; x++)
	{
		if (*s == *ops[x].op)
			return (ops[x].f);
	}

	return (NULL);
}
