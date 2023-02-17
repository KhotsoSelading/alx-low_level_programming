#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int iNum  = 0;

	while (iNum <= 9)
	{
		putchar(iNum + '0');
		++iNum;
	}
	putchar('\n');

	return (0);
}
