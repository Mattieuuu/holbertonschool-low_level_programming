#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - changes lowercase letters of a string to uppercase
 * @n: pointer
 * Return: pointer to edited string
 */
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - changes lowercase letters of a string to uppercase
 * @n: pointer
 * Return: pointer to edited string
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_sqrt_helper(n, i + 1));
}
