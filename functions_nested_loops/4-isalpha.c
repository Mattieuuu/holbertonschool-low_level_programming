#include "main.h"

/**
 * _isalpha - check the code.
 *
 * Description: Checks if c is a letter, lowercase or uppercase
 * @c: the character to check
 * Return: Always 0.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
