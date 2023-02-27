#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter inputted
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	char ch;
	int iLen, iCounter;

	for (iLen = 0; s[iLen] != '\0'; ++iLen)
		; /*find string length without null charater*/

	/*reverse the string*/
	for (iCounter = 0; iCounter < iLen / 2; ++iCounter)
	{
		ch = s[iCounter];
		s[iCounter] = s[iLen - 1 - iCounter];
		s[iLen - 1 - iCounter] = ch;
	}

}
