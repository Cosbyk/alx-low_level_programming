#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Returns the
 * nth node of a dlistint_t linked list.
 *
 * @head: The head of the list.
 * @index: The index of the node.
 * Return: The nth node
 * or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *x = head;
unsigned int y;

if (x == NULL)
return (NULL);

while (x->prev != NULL)
x = x->prev;

y = 0;

while (x != NULL)
{
if (y == index)
break;
x = x->next;
y++;
}

return (x);
}
