#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes to copy
 * Return: pointer to result string test
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; a < n && src[a] != '\0'; a++)
dest[a] = src[a];
for (; a < n; a++)
dest[a] = '\0';
return (dest);
}
