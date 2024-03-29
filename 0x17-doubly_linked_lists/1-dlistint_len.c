#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - Returns the number of elements in
 * a dlistint_t list.
 *
 * @h: Head of the list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
int num = 0;

if (h == NULL)
return (num);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
