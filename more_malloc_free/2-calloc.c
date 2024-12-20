#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - main function
 * @nmemb: number elements
 * @size: size of elements
 * Return: allocated memory or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return (ptr);
}
