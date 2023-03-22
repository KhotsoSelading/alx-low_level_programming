#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 *
 * @argc: counter
 * @argv: vector
 *
 * Return: Always Successful
*/

int main(int argc, char *argv[])
{
	char *ptr = (char *) main;
	int i, numBytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < numBytes; i++)
	{
		printf("%02x", ptr[i] & 0xFF);

		if (i != numBytes - 1)
			printf(" ");
	}
	
	printf("\n");
	return (0);
}
