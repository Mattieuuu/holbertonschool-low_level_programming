#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy the string pointed by src to dest
 * @dest: pointer to the destination array
 * @src: string copied
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;
while (src[a] != '\0')
{
dest[a] = src[a];
a++;
}
dest[a] = '\0';
return (dest);
}