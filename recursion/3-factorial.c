#include <stdio.h>
#include "main.h"

/**
 * factorial - calculate factorial of an integer
 * @n: integer to calculate factorial
 * Return: factorial of n
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if(n == 0 || n == 1)
{
return (1);
}
return n * factorial(n - 1);
}
