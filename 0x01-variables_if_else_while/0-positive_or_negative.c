#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int iNum;
	srand(time(0));
       
	iNum= rand() - RAND_MAX / 2;

	if (iNum > 0) printf("%i is positive\n", iNum);
	else if (iNum == 0)printf("%i is zero\n", iNum);
	else printf("%i is negative\n", iNum);

	return (0);
}
