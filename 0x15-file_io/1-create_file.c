#include "main.h"

/**
 * create_file - a function to create a file
 *
 * @filename: name of file to be created
 * @text_content: the string to write to file
 *
 * Return: 1 for success OR -1 for faliure
*/

int create_file(const char *filename, char *text_content)
{
	int iFile, iWord, iLength = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (iLength = 0; text_content[iLength];)
			iLength++;
	}

	iFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	iWord = write(iFile, text_content, iLength);

	if (iWord == -1 || iFile == -1)
		return (-1);

	close(iFile);
	return (1);
}
