#include "hash_tables.h"

/**
 * key_index - Fetches the index where a key pair is stored
 *             in array of a hash table.
 * @key: The key to fetch the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: Index of the key.
 *
 * Description: The function uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
