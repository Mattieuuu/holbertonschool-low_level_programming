#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - execute function on every element of array
 * @array: array to check
 * @size: number of elements in array
 * @cmp: pointer for comparaison
 * Return:  index of first element correct
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
