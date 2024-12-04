#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a new node after one
 * @head: head of the linked list
 * @str: character chain
 *
 * Return: count (number of node in the list)
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dup_str;
int len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

dup_str = strdup(str);
if (dup_str == NULL)
{
free(new_node);
return (NULL);
}
for (len = 0; str[len];)
len++;
new_node->str = dup_str;
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
