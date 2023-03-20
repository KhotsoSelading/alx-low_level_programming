#include "dog.h"

/**
 * new_dog - creates new dog
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: theNewDog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *theNewDog;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	theNewDog = malloc(sizeof(dog_t));

	if (theNewDog == NULL)
	{
		free(theNewDog);
		return (NULL);
	}

	theNewDog->name = malloc(i * sizeof(theNewDog->name));

	if (theNewDog->name == NULL)
	{
		free(theNewDog->name);
		free(theNewDog);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		theNewDog->name[k] = name[k];
	theNewDog->age = age;
	theNewDog->owner = malloc(j * sizeof(theNewDog->owner));

	if (theNewDog->owner == NULL)
	{
		free(theNewDog->owner);
		free(theNewDog->name);
		free(theNewDog);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		theNewDog->owner[k] = owner[k];

	return (theNewDog);
}
