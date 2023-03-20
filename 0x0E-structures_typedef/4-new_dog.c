#include "dog.h"

/**
 * new_dog - a function to create new dog
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: dog owner.
 *
 * Return: struct pointer dog
 *         NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *d_izinja;

	for (i = 0; name[i] != '\0'; i++)
		;

	for (j = 0; owner[j] != '\0'; j++)
		;

	d_izinja = malloc(sizeof(dog_t));

	if (d_izinja == NULL)
	{
		free(d_izinja);
		return (NULL);
	}

	d_izinja->name = malloc(i * sizeof(d_izinja->name));

	if (d_izinja->name == NULL)
	{
		free(d_izinja->name);
		free(d_izinja);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		d_izinja->name[k] = name[k];

	d_izinja->age = age;
	d_izinja->owner = malloc(j * sizeof(d_izinja->owner));

	if (d_izinja->owner == NULL)
	{
		free(d_izinja->owner);
		free(d_izinja->name);
		free(d_izinja);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		d_izinja->owner[k] = owner[k];

	return (d_izinja);
}
