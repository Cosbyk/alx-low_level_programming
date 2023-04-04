#include "lists.h"

/**
 * free_listint - Frees the linked list
 * @head: listint_t node to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
