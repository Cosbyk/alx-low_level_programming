#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given position
 * @h: Head of the list.
 * @idx: The index of the new node.
 * @n: The value to be stored in the new node.
 * Return: The address of the new node, NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *n_node = malloc(sizeof(dlistint_t));
dlistint_t *x = *h;
unsigned int y = 0;

if (n_node == NULL)
return (NULL);
if (idx == 0)
n_node = add_dnodeint(h, n);
else
{
y = 1;
if (x != NULL)
while (x->prev != NULL)
x = x->prev;
while (x != NULL)
{
if (y == idx)
{
if (x->next == NULL)
n_node = add_dnodeint_end(h, n);
else
{
if (n_node != NULL)
{
n_node->n = n;
n_node->next = x->next;
n_node->prev = x;
x->next->prev = n_node;
x->next = n_node;
}
}
break;
}
x = x->next;
y++;
}
}
return (n_node);
}
