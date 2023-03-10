#include "main.h"

/**
 * main - adds positive numbers.
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0. (Success)
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0, add = 0;

	do {
		do {
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		} while (argv[i][j] != '\0');
		i++;
		add += atoi(argv[i]);
	} while (i < argc);

	printf("%d\n", add);
	return (0);
}
