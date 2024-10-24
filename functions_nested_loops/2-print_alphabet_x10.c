#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
const char *alphabet = "abcdefghijklmnopqrstuvwxyz\n"
int number;
for (number = 0; number < 10; number++)
{
const char *current = alphabet;
while (*current)
{
_putchar(*current++)
}
}
}

