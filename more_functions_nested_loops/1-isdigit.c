#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if c is a digit
 * @c: Character to check
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
