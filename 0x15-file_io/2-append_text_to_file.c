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
	int iOpenFile, iLetters, iWords;

	if (filename == NULL)
		return (-1);

	iOpenFile = open(filename, O_WRONLY | O_APPEND);

	if (iOpenFile == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (iLetters = 0; text_content[iLetters]; iLetters++)
			;

		iWords = write(iOpenFile, text_content, iLetters);

		if (iWords == -1)
			return (-1);
	}

	close(iOpenFile);
	return (1);
}
