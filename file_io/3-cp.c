#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message to stderr and exits the program
 * @code: The exit code to use
 * @msg: The error message format string
 * @arg: The argument to be inserted into the error message
 *
 * Returns: Exits the program with the specified exit code
 */

void error_exit(int code, const char *msg, const char *arg)
{
dprintf(STDERR_FILENO, msg, arg);
exit(code);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, or exits with an error code on failure
 */

int main(int argc, char *argv[])
{
int fdfrom, fdto, rd, wr;
char buffer[BUFFER_SIZE];
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", NULL);

fdfrom = open(argv[1], O_RDONLY);
if (fdfrom == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
if (fdto == -1)
error_exit(99, "Error: Can't write to %s\n", argv[2]);

while ((rd = read(fdfrom, buffer, BUFFER_SIZE)) > 0)
{
wr = write(fdto, buffer, rd);

if (wr != rd || wr == -1)
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}

if (rd == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

if (close(fdfrom) == -1)
error_exit(100, "Error: Can't close fd %d\n", argv[1]);

if (close(fdto) == -1)
error_exit(100, "Error: Can't close fd %d\n", argv[2]);

return (0);
}
