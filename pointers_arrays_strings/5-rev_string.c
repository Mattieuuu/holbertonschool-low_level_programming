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
int a;
char tmp;
while (s[length] != '\0')
{
length++;
}
for (a = 0; a < length / 2; a++)
{
tmp = s[a];
s[a] = s[length - 1 - a];
s[length - 1 - a] = temp;
}
}
