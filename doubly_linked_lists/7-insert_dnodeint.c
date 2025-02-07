#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the pointer of the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to be added in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;

if (idx  == 0)
return (add_dnodeint(h, n));

while (i < idx - 1 && temp != NULL)
{
temp = temp->next;
i++;
}
if (i == idx - 1 && temp == NULL)
return (add_dnodeint_end(h, n));

if (temp == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

new_node->next = temp->next;
new_node->prev = temp;
if (temp->next != NULL)
{
temp->next->prev = new_node;
}
temp->next = new_node;

return (new_node);
}
