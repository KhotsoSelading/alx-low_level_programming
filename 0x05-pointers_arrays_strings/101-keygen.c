#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password.
 * Return: 0 Always (Success).
 */

int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));

	for (c = 0; c < 2772; c+=r)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		printf("%c", r);
	}

	printf("%c\n", (2772 - c));
	return (0);
}
