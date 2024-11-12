#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and allocate memory in it
 * @c: initialisation of array with c
 * @size: size of array created
 * Return: pointer to newly array created, or null if it fails
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = (char *) malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
