#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table to print.
 *
 * Description: Should print Key/value in the order they
 *              appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_t;
	unsigned long int x;
	unsigned char y;
y = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (y == 1)
				printf(", ");

			node_t = ht->array[x];
			while (node_t != NULL)
			{
				printf("'%s': '%s'", node_t->key, node_t->value);
				node_t = node_t->next;
				if (node_t != NULL)
					printf(", ");
			}
			y = 1;
		}
	}
	printf("}\n");
}
