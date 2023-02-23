#include "main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 *       multiples of 3 print Fizz
 *       multiples of 5 print Buzz
 *       multiples of 3 n 5 print FizzBuzz
 *       each number and word to be separated by space
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int iNum;

	for (iNum = 1; iNum <= 100; ++iNum)
	{
		if (iNum % 3 == 0 && !(iNum % 5 == 0))
			printf("Fizz");
		else if (iNum % 5 == 0 && !(iNum % 3 == 0))
			printf("Buzz");
		else if (iNum % 3 == 0 && iNum % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", iNum);

		if (iNum != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
