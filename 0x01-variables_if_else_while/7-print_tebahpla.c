#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	char cAlpha = 'z';

	while (cAlpha >= 'a')
	{
		putchar(cAlpha);
		--cAlpha;
	}
	putchar('\n');

	return (0);
}
