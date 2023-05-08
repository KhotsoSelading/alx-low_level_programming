#include "main.h"

/**
 * errorFinding - function to print error messages and exit number with number
 *
 * @errCode: the exit number or the file descriptor
 * @fileName: name of originalFile or copyFile
 * @fileType: the file descriptor
 *
 * Return: 0. (Success)
*/

int errorFinding(int errCode, char *fileName, int fileType)
{
	switch (errCode)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(errCode);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileName);
			exit(errCode);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileName);
			exit(errCode);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileType);
			exit(errCode);
		default:
			return (0);
	}
}

/**
 * main - creates a copy of file created
 *
 * @argc: a counter
 * @argv: a vector
 *
 * Return: 0. (Success)
*/

int main(int argc, char *argv[])
{
	char buffer[1024];
	int originalFile, copyFile, inStatus, outStatus, inFile, outFile;

	if (argc != 3)
		errorFinding(97, NULL, 0);
	originalFile = open(argv[1], O_RDONLY);

	if (originalFile == -1)
		errorFinding(98, argv[1], 0);
	copyFile = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (copyFile == -1)
		errorFinding(99, argv[2], 0);

	while ((inStatus = read(originalFile, buffer, 1024)) != 0)
	{
		if (inStatus == -1)
			errorFinding(98, argv[1], 0);

		outStatus = write(copyFile, buffer, inStatus);
		if (outStatus == -1)
			errorFinding(99, argv[2], 0);
	}

	inFile = close(originalFile);
	if (inFile == -1)
		errorFinding(100, NULL, originalFile);

	outFile = close(copyFile);
	if (outFile == -1)
		errorFinding(100, NULL, copyFile);

	return (0);
}
