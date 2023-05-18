#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - Returns sum of all the data
 * (n) of a dlistint_t linked list.
 *
 * @head: The head of the list.
 * Return: The sum of all the data
 * or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *x = head;

if (x != NULL)
{
while (x->prev != NULL)
x = x->prev;

while (x != NULL)
{
sum += x->n;
x = x->next;
}
}
return (sum);
}
