#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: contain bytes
 * @accept: pointer who compare bytes with s
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
int count = 0;
int i, a;
int flag;
for (i = 0; s[i] != '\0'; i++)
{
flag = 0;
for (a = 0; accept[a] != '\0'; a++)
{
if (s[i] == accept[a])
{
flag = 1;
break;
}
}
if (flag == 0)
break;
count++;
}
return (count);
}