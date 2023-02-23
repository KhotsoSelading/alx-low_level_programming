#include "main.h"

/**
 * more_iNumbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0. (Success)
*/

void more_iNumbers(void)
{
	int iNum, iRow, iCnt;

	for (iRow = 1; iRow <= 10; ++iRow)
	{
		for (iCnt = 0; iCnt <= 14; ++iCnt)
		{
			iNum = iCnt;
			if (iCnt > 9)
			{
				_putchar(1 + 48);
				iNum = iCnt % 10;
			}
			_putchar(iNum + 48);
		}
		_putchar('\n');
	}
}
