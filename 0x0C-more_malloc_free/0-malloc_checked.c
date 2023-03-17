#include "main.h"

/**
 * malloc_checked - allocates memory
 *
 * @b:size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc not, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *newMem  = malloc(b);

	if (newMem == NULL)
		exit(98);

	return (newMem);
}
