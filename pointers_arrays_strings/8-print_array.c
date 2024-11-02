#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a: array to print
 * @n: number of element to print
 * Return: Always void
 */

void print_array(int *a, int n)
{
int c;
for (c = 0; c < n; c++)
{
if (c != 0)
{
printf(", ");
}
printf("%d", a[c]);
}
printf("\n");
}
