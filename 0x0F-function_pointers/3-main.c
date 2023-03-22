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
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if ((argv[2][0]) && (y == 0))
        {
                printf("Error\n");
                exit(100);
        }
	printf("%d\n", operation(x, y));
	return (0);
}
