#include "main.h"

/**
 * _realloc - reallocates memory block.
 *
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 *
 * Return: ptr if new size == new size, NULL if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if ((ptr != NULL) && (new_size == 0))
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
