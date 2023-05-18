#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning
 * of a dlistint_t list.
 *
 * @head: Pointer to the head of the list.
 * @n: Value stored in the new node.
 * Return: Address of the new element
 * or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *x;
dlistint_t *n_node = malloc(sizeof(dlistint_t));

if (n_node == NULL)
return (NULL);

n_node->n = n;
n_node->prev = NULL;
x = *head;

if (x != NULL)
{
while (x->prev != NULL)
x = x->prev;
}
n_node->next = x;

if (x != NULL)
x->prev = n_node;

*head = n_node;
return (n_node);
}
