#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all elements of chain list list_t
 * @h: pointer for first node of the list
 *
 * Return: number of node in the list
 */

size_t print_list(const list_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
node_count++;
}
return (node_count);
}
