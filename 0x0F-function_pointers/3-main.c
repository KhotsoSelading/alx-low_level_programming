#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0. (Success)
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(x, y));
	return (0);
}
