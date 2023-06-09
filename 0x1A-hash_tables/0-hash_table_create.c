#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: On pass, returns  pointer to new hash table
 *         On failure, returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int x;

	/* Allocate memory for hash table */
	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table); /* Clean up memory if allocation fails */
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		h_table->array[x] = NULL;
	}

	return (h_table);
}
