#include <stdio.h>
#include "main.h"

/**
 * reverse_array - copy string
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
int tmp;
int b;
for (b = 0; b < n / 2; b++)
{
tmp = a[b];
a[b] = a[n - 1 - b];
a[n - 1 - b] = tmp;
}
}
