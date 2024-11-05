#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalize words of a string
 * @str: string edited
 * Return: pointer to edited string
 */

char *cap_string(char *str)
{
int b = 0;
int cap_next;
while (str[b] != '\0')
{
if (cap_next && str[b] >= 'a' && str[b] <= 'z')
{
str[b] = str[b] - 32;
}
cap_next = 0;
switch (str[b])
{
case ' ': case '\t': case '\n':
case ',': case ';': case '.':
case '!': case '?': case '"':
case '(': case ')': case '{': case '}':
cap_next = 1;
}
b++;
}
return (str);
}