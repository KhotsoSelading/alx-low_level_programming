#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	char cLowerCase = 'a', cUpperCase = 'A';

	/*prints a - z in lower case*/
	while (cLowerCase <= 'z')
	{
		putchar(cLowerCase);
		++cLowerCase;
	}

	/*prints A - Z in upper case*/
	while (cUpperCase <= 'Z')
	{
		putchar(cUpperCase);
		++cUpperCase;
	}
	putchar('\n');

	return (0);
}
