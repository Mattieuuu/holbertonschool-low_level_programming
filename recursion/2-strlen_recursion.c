#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: pointer of the string
 * Return: s + 1
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
