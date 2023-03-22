#include "3-calc.h"

/**
 * op_add - add @a and @b
 *
 * @a: function input 1
 * @b: function input 2
 *
 * Return: sum of @a and @b
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - gets the difference of @a and @b
 *
 * @a: function input 1
 * @b: function input 2
 *
 * Return: difference of @a and @b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies @a and @b
 *
 * @a: function input 1
 * @b: function input 2
 *
 * Return: product of @a and @b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides @a by @b
 *
 * @a: function input 1
 * @b: function input 2
 *
 * Return: results of the division @a and @b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the reminder of the division between @a and @b
 *
 * @a: function input 1
 * @b: function input 2
 *
 * Return: the remainder of division of @a by @b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
