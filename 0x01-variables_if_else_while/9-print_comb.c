#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int iNum = 0;

	while (iNum <= 9)
	{
		putchar(iNum + 48);
		if (iNum != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++iNum;
	}
	putchar('\n');

	return (0);
}
