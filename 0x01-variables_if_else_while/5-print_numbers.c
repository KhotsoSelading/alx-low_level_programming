#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int iNum = 0;

	while (iNum <= 9)
	{
		printf("%i", iNum);
		++iNum;
	}
	printf("\n");

	return (0);
}
