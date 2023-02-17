#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	char cAlpha = 'a';

	while (cAlpha <= 'z')
	{
		putchar(cAlpha);
		++cAlpha;
	}

	putchar('\n');

	return (0);
}
