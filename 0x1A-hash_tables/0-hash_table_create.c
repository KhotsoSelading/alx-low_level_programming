#include "hash_tables.h"

/**
 * hash_table_create - Function to create a hash table.
 * @size: The size of array.
 *
 * Return: NULL if an error occurs.
 *         Otherwise, a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *theHashTable;
	unsigned long int i = 0;

	theHashTable = malloc(sizeof(hash_table_t));
	if (theHashTable == NULL)
		return NULL;

	theHashTable->size = size;
	theHashTable->array = malloc(sizeof(hash_node_t *) * size);

	if (theHashTable->array == NULL)
		return NULL;

	while (i < size) 
	{
		theHashTable->array[i] = NULL;
		i++;
	}

	return theHashTable;
}

