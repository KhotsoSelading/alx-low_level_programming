#include "main.h"

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0. (Success)
 */

int main(int argc, char *argv[])
{
	int x = 0;

	do {
		printf("%s\n", argv[x]);
		x++;
	} while (x < argc);
	return (0);
}
