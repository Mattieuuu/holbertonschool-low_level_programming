#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
const char  *alphabet = "abcdefghijklmnopqrstuvwxyz\n";
while (*alphabet)
{
_putchar(*alphabet++);
}
}

