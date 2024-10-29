#include <stdio.h>
#include "main.h"

/**
 * print_line - prints _according to number of n
 *
 * @n: the character to check
 * Return: void
 */

void print_line(int n)
{
int a;
if (n <= 0)
_putchar('\n');
for (a = 0; a < n; a++)
{
_putchar('_');
}
if (n > 0)
_putchar('\n');
}
