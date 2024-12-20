#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares string
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are equal
 *         positive if s1 is greater than s2
 *         negative if s1 is less than s2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
