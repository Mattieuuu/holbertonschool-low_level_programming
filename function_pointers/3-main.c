#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main 
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or error
 */

int main(int argc, char *argv[])
{
int (*operator)(int, int);
int n1, n2, res;

if (argc != 4)
{
printf("ERROR\n");
exit(98);
}
 n1 = atoi(argv[1]);
 n2 = atoi(argv[3]);
 operator = get_op_func(argv[2]);

if (operator == NULL)
{
printf("ERROR\n");
exit(99);
}
res = operator(n1, n2);
printf("%d\n", res);
return (0);
}
