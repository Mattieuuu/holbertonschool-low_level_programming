#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Print a diagonal line in terminal
 * @n: character to check
 * Description: Prints a diagonal line
 * Return: void
 */

void print_diagonal(int n)
{
int a;
int b;
if (n <= 0)
{
_putchar('\n');
return;
}
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
