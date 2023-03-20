#include "dog.h"

/**
 * free_dog - free struct pointers
 *
 * @d: pointers to free
 *
 * Return: return nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
