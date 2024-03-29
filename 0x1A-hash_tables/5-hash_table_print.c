#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			for (; node != NULL; node = node->next)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}

