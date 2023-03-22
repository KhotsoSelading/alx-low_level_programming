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
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
