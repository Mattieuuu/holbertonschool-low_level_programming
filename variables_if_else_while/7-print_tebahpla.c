#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch=--;
}
putchar('\n');
return (0);
}
