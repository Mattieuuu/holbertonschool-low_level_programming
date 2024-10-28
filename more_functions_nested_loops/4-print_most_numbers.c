#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers from 1 to 9 without 2 and 4
 *
 * Description: print numbers from 1 to 9 no  2 and 4 followed by a new line
 * Return: Void
 */

void print_most_numbers(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
if (number != '2' && number != '4')
  _putchar(number);
}
_putchar('\n');
}
