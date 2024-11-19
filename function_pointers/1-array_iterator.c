#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function on every element of array
 * @array: array to check
 * @size: number of elements of the array
 * @action: pointer of the function to apply on every elements
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
