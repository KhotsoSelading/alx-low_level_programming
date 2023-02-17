#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int iNum, iLastDigit;

	srand(time(0));
	iNum = rand() - RAND_MAX / 2;

	iLastDigit = iNum % 10; /*Finds the last digi*/

	if (iLastDigit> 5) printf("Last digit of %i is %i and is greater than 5\n", iNum, iLastDigit);
	else if (iLastDigit == 0) printf("Last digit of %i is %i and is 0\n", iNum, iLastDigit);
	else if (iLastDigit < 6 && iLastDigit != 0) printf("Last digit of %i is %i and is less than 6 and not 0\n", iNum, iLastDigit);

	return (0);
}
