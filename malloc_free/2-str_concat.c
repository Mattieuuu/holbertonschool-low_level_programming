#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a newly allocated space in memory
 * @s1: first chain of characters
 * @s2: second chain to concatenate
 * Return: NULL if new_str = NULL, or new_str
 */

char *str_concat(char *s1, char *s2)
{
char *new_str;
int len1 = 0;
int len2 = 0;
int i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
new_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
new_str[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
new_str[i + j] = s2[j];
}
new_str[i + j] = '\0';
return (new_str);
}
