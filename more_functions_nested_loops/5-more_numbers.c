#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints number from 0 to 14 but 10 times
 *
 * Description: Prints number from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int a;
int number;
for (a = 0; a < 10; a++)
{
for (number = 0; number <= 14; number++)
{
if (number > 9)
_putchar((number / 10) + '0');
_putchar((number % 10) + '0');
}
_putchar('\n');
}
}
