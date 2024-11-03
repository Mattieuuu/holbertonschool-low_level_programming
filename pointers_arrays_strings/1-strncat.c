#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two string using n bytes from src
 * @dest: destination
 * @src: the source string
 * @n: max number of bytes from src
 * Return: pointer to the result string dest
 */

char *_strncat(char *dest, char *src, int n);
{
int dest_len = 0;
int a;
while (dest[dest_len] != '\0')
dest_len++;
for (a = 0; a < n && src[a] != '\0'; a++)
dest[dest_len + a] = src[a];
dest[dest_len + a] = '\0';
return (dest);
}
