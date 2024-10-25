#include "main.h"

/**
 * print_sign - Prints a character according to a variable
 * @n: Character to check
 * Return: 1 if n is greater than zero and prints +
 *         0 if n is zero and prints 0
 *         -1 if n is less than zero and prints -1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
