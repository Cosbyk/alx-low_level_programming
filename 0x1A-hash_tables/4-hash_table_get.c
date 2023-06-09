#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: Pointer to the hash table.
 * @key: Pointer to the key we are looking for.
 *
 * Return: If the key cannot be found - NULL.
 *         Otherwise - the value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node_t;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
		return (NULL);
	node_t = ht->array[x];
	while (node_t && strcmp(node_t->key, key) != 0)
		node_t = node_t->next;

	return ((node_t == NULL) ? NULL : node_t->value);
}
