#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a chain of character in reverse
 * @s: chain of character
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
