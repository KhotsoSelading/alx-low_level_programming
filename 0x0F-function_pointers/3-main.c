#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.(Success)
 */

int main(int argc, char *argv[])
{
	int x, y;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((y == 0) && (o == '/' || o == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(x, y));

	return (0);
}
