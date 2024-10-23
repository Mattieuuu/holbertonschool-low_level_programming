#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase and uppercase alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
char lower_ch = tolower(ch);
putchar(tolower(ch));
putchar('\n');
return (0);
}
