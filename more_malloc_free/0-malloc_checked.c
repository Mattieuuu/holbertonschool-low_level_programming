#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - main function
 * @b: initialisation of array with c
 * Return: status value 98 or pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
