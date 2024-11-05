#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer containing the set of byte
 * @accept: special pointer containing characters we want
 * Return: flag or null
 */

char *_strpbrk(char *s, char *accept)
{
int i, b;
for (i = 0; s[i] != '\0'; i++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[i] == accept[b])
{
return (&s[i]);
}
}
}
return (NULL);
}
