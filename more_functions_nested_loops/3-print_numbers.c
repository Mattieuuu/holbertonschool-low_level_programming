#include <stdio.h>
#
/**
 * print_numbers - Prints number from 0 to 9
 *
 * Description: Prints numbers from 0 to 9 followed by a new line
 * Return: Void
 */

void print_numbers(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
_putchar (number);
}
_putchar ('\n');
}
