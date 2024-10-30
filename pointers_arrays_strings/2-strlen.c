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
int length = 0;
while (*s != '\0')
{
_putchar(*s);
s++;
length++;
}
return (length);
}
