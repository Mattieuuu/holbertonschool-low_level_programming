#include <stdio.h>
#include "main.h"

/**
 * _strlen - Entry point
 * @s: pointer of string
 * Description: calculate the length of the string
 * Return: *s
 */

int _strlen(char *s)
{
while (*s =! '\0')
{
s++;
_putchar(*s);
}
return (*s);
}