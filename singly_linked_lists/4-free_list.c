#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list -free list of type list_t
 * @head: pointer for head of list
 */

void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
