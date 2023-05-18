#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Prints all components of
 * the dlistint_t list.
 *
 * @h: head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int num = 0;

if (h == NULL)
return (num);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
