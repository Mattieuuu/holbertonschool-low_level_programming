#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a half of a string
 *
 * @str: the character to check
 * @a: character to check
 * @b: character to check
 * Return: void
 */

void puts_half(char *str)
{
int length = 0;
int a, b;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
b = length / 2;
}
else
{
b = (length - 1) / 2 + 1;
}
for (a = b; a < length; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
