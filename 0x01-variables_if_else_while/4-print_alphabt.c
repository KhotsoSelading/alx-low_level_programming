#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	char cAlpha = 'a';

	while (cAlpha <= 'z')
	{
		if (cAlpha == 'q' || cAlpha == 'e')
			++cAlpha;
		putchar(cAlpha);
		++cAlpha;
	}

	putchar('\n');

	return (0);
}
