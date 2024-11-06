#include <stdio.h>
#include "main.h"

/**
 * _string_toupper - changes lowercase letters of a string to uppercase
 * @str
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
