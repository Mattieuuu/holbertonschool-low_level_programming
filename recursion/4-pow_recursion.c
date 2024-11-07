#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - calculate an exposant
 * @x: base
 * @y: exposant
 * Return: x^y or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
