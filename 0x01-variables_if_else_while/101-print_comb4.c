#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *            combinations of two digits.
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int aNum = 0;
	int bNum, cNum;

	while (aNum <= 9)
	{
		bnum = 0;
		while (bNum <= 9)
		{
			cNum = 0;
			while (cNum <= 9)
			{
				if ((aNum != bNum) && (aNum < bNum) && (bNum != cNum) && (bNum < cNum))
				{
					putchar(aNum + 48); putchar(bNum + 48); putchar(cNum + 48);

					if ((digit1 + digit2 + digit3) != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++cNum;
			}
			++bNum;
		}
		++aNum;
	}
	putchar('\n');

	return (0);
}
