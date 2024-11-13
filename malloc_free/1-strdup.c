#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
int length = 0;
char *s;
int i;

if (str == NULL)
{
    return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
length++;
}
s = (char *)malloc((length + 1) * sizeof(char));

if (s == NULL)
{
return (NULL);
}

for (i = 0; i <= length; i++)
{
s[i] = str[i];
}
return (s);
}
