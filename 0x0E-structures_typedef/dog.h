#ifndef Dog_h
#define Dog_h

#include <stdio.h>
#include <stdlib.h>

/**
* dog_t - Typedef for struct dog
**/

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* Dog_h */
