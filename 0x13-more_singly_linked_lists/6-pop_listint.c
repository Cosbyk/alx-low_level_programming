#include "lists.h"

/**
 * pop_listint - Removes the first node of the linked list.
 * @head: Pointer to the first node in the linked list.
 * Return: The integer data stored in the node that was removed,
 *         or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
