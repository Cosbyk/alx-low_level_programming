#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Pointer to the head node of the linked list
 * The function frees a linked list and sets the head pointer to NULL.
 * If the head pointer is already NULL, the function does nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
