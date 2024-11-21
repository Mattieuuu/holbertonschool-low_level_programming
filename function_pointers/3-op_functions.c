#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - returns result of an operator a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - returns result of an operator a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - returns result of an operator a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - returns result of an operator a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - returns result of an operator a and b
 * @a: number 1
 * @b: number 2
 * Return: result
 */

int op_mod(int a, int b)
{
return (a % b);
}
