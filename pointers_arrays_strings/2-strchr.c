#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer containing the string
 * @c: character desired in pointer s
 * Return: adress of pointer s
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
if (c == '\0')
{
return (&s[i]);
}
return (NULL);
}
