#include "main.h"

/**
 * append_text_to_file - Appends text at end of a certain file
 *
 * @filename: a pointer that points to the name of the file
 * @text_content: the string that adds to the end of the file
 *
 * Return: -1 if the fails does not exist or if it fails. 1 if the file exists.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int iLength, iOpen, iWrite;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (iLength = 0; text_content[iLength];)
			iLength++;

	iOpen = open(filename, O_WRONLY | O_APPEND);
	iWrite = write(iOpen, text_content, iLength);

	if (iWrite == -1 || iOpen == -1)
		return (-1);

	close(iOpen);
	return (1);
}
