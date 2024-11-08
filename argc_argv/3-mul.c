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
int number1;
int number2;
int result = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}
number1 = atoi(argv[1]);
number2 = atoi(argv[2]);
result = number1 * number2;

printf("%d\n", result);

return (0);

}
