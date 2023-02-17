#include<stdio.h>

/**
 * main - Entry Point
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: Always 0.
 */

int main(void)
{
	int aNum = 0, bNum;

	while (aNum <= 99)
	{
		bNum = aNum;
		while (bNum <= 99)
		{
			if (aNum != bNum)
			{
				putchar((aNum / 10) + 48);
				putchar((aNum % 10) + 48);
				putchar(' ');
				putchar((bNum / 10) + 48);
				putchar((bNum % 10) + 48);

				if ((aNum != 98) || (bNum != 99))
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
