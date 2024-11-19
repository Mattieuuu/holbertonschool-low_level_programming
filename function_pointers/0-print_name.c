#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: function pointer
 * @name: name
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
