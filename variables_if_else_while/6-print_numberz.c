#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
{
putchar(ch + '0');
}
putchar('\n');
return (0);
}
