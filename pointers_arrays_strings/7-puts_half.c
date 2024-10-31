#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a half of a string
 *
 * @str: the character to check
 * Return: void
 */

void puts2(char *str)
{
int length = 0;
while (str[length] != '\0')
{
if (length / 2 == 0)
{
_putchar(str[length]);
}
length++;
}
_putchar('\n');
}
