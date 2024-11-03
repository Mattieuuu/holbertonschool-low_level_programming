#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string edited
 * Return: pointer to edited string
 */

char *string_toupper(char *str)
{
int b = 0;
while (str[b] != '\0')
{
if (str[b] >= 'a' && str[b] <= 'z')
{
str[b] = str[b] - 32;
}
b++;
}
return (str);
}
