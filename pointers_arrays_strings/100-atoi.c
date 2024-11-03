#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to int
 *
 * @s: string to be converted
 * Return: the int converted
 */

int _atoi(char *s)
{
int a = 0;
int sign = 1;
int out = 0;
int digit;

while (s[a] != '\0')
{
if (s[a] == '-')
{
sign *= -1;
}
else if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (out > (INT_MAX - digit) / 10)
return (sign == 1 ? INT_MAX : INT_MIN);
out = out * 10 + digit;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
}
a++;
}
return (out *sign);
}
