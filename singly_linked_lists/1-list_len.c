#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of chain list list_t
 * @h: pointer for first node of the list
 *
 * Return: count (number of node in the list)
 */

size_t list_len(const list_t *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        h = h->next;
        count++;
    }
    return (count);
}