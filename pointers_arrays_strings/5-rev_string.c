#include <stdio.h>
#include "main.h"

/**
 * print_rev - print pointer str in reverse
 * @s: pointer to check
 * Description: Prints Holberton! in reverse
 * Return: void
 */

void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
length--;
while (length >= 0)
{
_putchar(s[length]);
length--;
}
_putchar('\n');
}
