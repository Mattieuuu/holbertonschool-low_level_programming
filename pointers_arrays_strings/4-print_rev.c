#include <stdio.h>
#include "main.h"

/**
 * print_rev - print pointer str in reverse
 * @s: pointer to check
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
while (length != 0)
{
_putchar(s[length]);
length--;
}
}
