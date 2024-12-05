#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - prints all elements of the list
 * @head: pointer for head of list
 *
 * Return: adress of new node or null if allocation fail
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
