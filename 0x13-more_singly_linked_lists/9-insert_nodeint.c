#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node into
 * a linked list at a given position.
 * @head: Pointer to the first node in the linked list.
 * @idx: The index where the new node should be inserted.
 * @n: The data to be stored in the new node.
 *
 * Return: Pointer to the new node if successful, otherwise NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node;
	listint_t *top = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (x = 0; top && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_node->next = top->next;
			top->next = new_node;
			return (new_node);
		}
		else
			top = top->next;
	}

	return (NULL);
}
