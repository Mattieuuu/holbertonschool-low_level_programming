#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints all elements of the list
 * @h: Pointeur for first node
 *
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
