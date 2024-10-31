#include <stdio.h>
#include "main.h"

/**
 * rev_string - print pointer str in reverse
 * @s: pointer to check
 * Return: void
 */

void rev_string(char *s)
{
int length = 0;
int a;
char tmp;
while (s[length] != '\0')
{
length++;
}
for (a = 0; a < length / 2; a++)
{
tmp = s[a];
s[a] = s[length - 1 - a];
s[length - 1 - a] = tmp;
}
}
