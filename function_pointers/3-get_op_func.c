#include <stdio.h>
#include "3-calc.h"

/**
 * array_iterator - execute function on every element of array
 * @array: array to check
 * @size: number of elements of the array
 * @action: pointer of the function to apply on every elements
 * Return: no return
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if(*(ops[i].op) == *s && s[1] == '\0')
{
return (ops[i].f);
}
i++
}
}