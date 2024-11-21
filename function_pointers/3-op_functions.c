#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function on every element of array
 * @array: array to check
 * @size: number of elements of the array
 * @action: pointer of the function to apply on every elements
 * Return: no return
 */

int op_add(int a, int b)
{
    return (a + b);
}

int op_sub(int a, int b)
{
    return (a - b);
}

int op_mul(int a, int b)
{
    return (a * b);
}

int op_div(int a, int b)
{
if (b == 0)
{
printf("ERROR\n");
exit (100);
}
return (a / b);
}

int op_mod(int a, int b)
{
if (b == 0)
{
printf("ERROR\n");
exit (100);
}
return (a % b);
}
