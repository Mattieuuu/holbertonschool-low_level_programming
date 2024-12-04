#include <stdio.h>
#include "lists.h"

/**
 * list_len - calculate number of elements in character chain
 * @h: pointer for first node of the list
 *
 * Return: count
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
