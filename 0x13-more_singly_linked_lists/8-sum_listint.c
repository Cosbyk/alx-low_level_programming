#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the integers in a linked list.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: The sum of all integers in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *top = head;

	while (top)
	{
		sum += top->n;
		top = top->next;
	}

	return (sum);
}
