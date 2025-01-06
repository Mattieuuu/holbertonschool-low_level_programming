#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints the PID of the parent process
 *
 * Return: Always 0.
 */

int main(void)
{
    pid_t parent_pid; // Déclare une variable pour stocker le PID du parent

    parent_pid = getppid(); // Appelle la fonction getppid() pour obtenir le PID du processus parent
    printf("%u\n", parent_pid); // Affiche le PID du parent en utilisant printf

    return (0); // Retourne 0 pour indiquer que le programme s'est exécuté avec succès
}
