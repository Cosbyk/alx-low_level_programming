#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to  hash table.
 *
 * Description: Frees the memory allocated for the hash table,
 *              including all the nodes and their elements.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *x = ht;
	hash_node_t *y, *tmp;
	unsigned long int z;

	if (ht == NULL)
		return;

	for (z = 0; z < ht->size; z++)
	{
		if (ht->array[z] != NULL)
		{
			y = ht->array[z];
			while (y != NULL)
			{
				tmp = y->next;
				free(y->key);
				free(y->value);
				free(y);
				y = tmp;
			}
		}
	}

	free(x->array);
	free(x);
}
