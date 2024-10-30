#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints the string of a pointer
 * @str: the pointer containing the string to print
 * Description: Prints the string in the pointer str
 * Return: void
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
