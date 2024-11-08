#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int result = 0;
int i, j;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}
