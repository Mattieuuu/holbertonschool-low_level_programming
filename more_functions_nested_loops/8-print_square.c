#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square in terminal
 * @size: word to check, size of square
 * Description: Prints square following by a new line
 * Return: if size is less than 0
 */

void print_square(int size)
{
int a;
int b;
if (int size <= 0)
{
_putchar('\n');
return;
}
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
