#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest
 *	prime factor of number (num)
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int a, maxf;
	long lNumber = 612852475143; /*largest number*/
	double square = sqrt(lNumber); /* square root of largest number*/

	for (a = 1; a <= square; a++)
	{
		if (lNumber % a == 0)
		{
			maxf = lNumber / a;
		}
	}
	printf("%ld\n", maxf);

	return (0);
}
