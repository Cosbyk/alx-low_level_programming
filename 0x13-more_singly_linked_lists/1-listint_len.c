#include "lists.h"

/**
 * listint_len - Computes the number of elements in
 * a linked list of integers
 *
 * @h: Pointer to the start of a linked list of integers
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
