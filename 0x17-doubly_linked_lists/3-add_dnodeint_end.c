#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds new node at the
 * end of a dlistint_t list.
 *
 * @head: Head of the list.
 * @n: Value of the element stored.
 * Return: The address of the new element
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *n_node = malloc(sizeof(dlistint_t));
dlistint_t *x;

if (n_node == NULL)
return (NULL);

n_node->n = n;
n_node->next = NULL;
x = *head;

if (x == NULL)
{
n_node->prev = NULL;
*head = n_node;
return (n_node);
}

while (x->next != NULL)
x = x->next;

x->next = n_node;
n_node->prev = x;

return (n_node);
}
