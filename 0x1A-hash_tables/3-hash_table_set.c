#include "hash_tables.h"

/**
 * hash_table_set - Adds an element in a hash table.
 * @ht: Pointer to  hash table.
 * @key: The key to add (it cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: On failure - 0.
 *         On success - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *copy_val;
	unsigned long int index, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)

		{
			free(ht->array[x]->value);
			ht->array[x]->value = copy_val;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copy_val);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = copy_val;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
