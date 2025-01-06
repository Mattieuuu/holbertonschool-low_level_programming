#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(void)
{
    pid_t child_pid;
    int status;
    int i;

    for (i = 0; i < 5; i++)
    {
        // Créer un nouveau processus enfant
        child_pid = fork();

        if (child_pid == -1)
        {
            // Gestion de l'erreur si fork échoue
            perror("Error:");
            return 1;
        }
        else if (child_pid == 0)
        {
            // Code exécuté par le processus enfant
            char *argv[] = {"ls", "-l", "/tmp", NULL};
            char *envp[] = {NULL};

            // Exécuter la commande ls -l /tmp
            execve("/bin/ls", argv, envp);

            // Si on arrive ici, c'est que execve a échoué
            perror("execve");
            return 1;
        }
        else
        {
            // Code exécuté par le processus parent
            // Attendre que le processus enfant se termine
            wait(&status);
        }
    }

    return 0;
}

