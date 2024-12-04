#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - prints all elements of the list
 * @head: pointer for head of list
 * @n: Value to stock in new node
 *
 * Return: adress of new node or null if allocation fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head != NULL)
(*head)->prev = new_node;

*head = new_node;
return (new_node);
}
