#include "main.h"

/**
* _memset - complete every bytes that s is pointing
* @s: pointer that points the bytes to complete
* @b: constant byte
* @n: bytes to complete
* Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n > 0)
{
*p = (unsigned char)b;
p++;
n--;
}
return (s);
}
