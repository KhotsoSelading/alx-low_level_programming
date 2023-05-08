#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints the letters
 *
 * @filename: the filename
 * @letters: the numbers of letters printed
 *
 * Return: the number of letters printed. If it fails, it will returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int iFile;
	char *cBuffer;
	ssize_t sRead, sWords;

	if (!filename)
		return (0);

	iFile = open(filename, O_RDONLY);

	if (iFile == -1)
		return (0);

	cBuffer = malloc(sizeof(char) * (letters));

	if (!cBuffer)
		return (0);

	sRead = read(iFile, cBuffer, letters);
	sWords = write(STDOUT_FILENO, cBuffer, sRead);
	close(iFile);
	free(cBuffer);
	return (sWords);
}
