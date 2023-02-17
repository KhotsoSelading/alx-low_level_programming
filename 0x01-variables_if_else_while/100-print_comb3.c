#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0. (Success)
*/

int main(void)
{
	int aNum = 0, bNum;

	while (aNum <= 9)
	{
		bNum = 0;
		while (bNum <= 9)
		{
			if ((aNum < bNum) && (aNum != bNum))
			{
				putchar(aNum + 48);
				putchar(bNum + 48);

				if (aNum + bNum != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++bNum;
		}
		++aNum;
	}
	putchar('\n');

	return (0);
}
