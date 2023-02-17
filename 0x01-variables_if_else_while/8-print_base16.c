#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int iNum = 48;

	while (iNum <= 102)
	{
		putchar(iNum);
		if (iNum == 57)
			iNum += 39;
		++iNum;
	}
	putchar('\n');

	return (0);
}
