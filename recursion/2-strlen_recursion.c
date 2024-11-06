#include <stdio.h>
#include "main.h"

/**
 * _string_toupper - return length of a string
 * @s: pointer of the string
 * Return: pointer to edited string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return 0;
}
return 1 + _strlen_recursion(s + 1);
}
