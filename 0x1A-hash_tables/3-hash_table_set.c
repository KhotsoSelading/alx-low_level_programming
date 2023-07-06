#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: -1 else 0 when failed.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ht = malloc(sizeof(hash_node_t));
	char *value_copy = strdup(value);
	unsigned long int i, idx = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	if (value_copy == NULL)
		return (0);

	i = idx;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
		i++;
	}

	if (new_ht == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(new_ht);
		return (0);
	}
	new_ht->value = value_copy;
	new_ht->next = ht->array[idx];
	ht->array[idx] = new_ht;

	return (1);
}

