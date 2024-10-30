#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap value of a and b
 * @a: first value to check
 * @b: second value to check
 * Description: Prints lowercase and uppercase alphabet
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
