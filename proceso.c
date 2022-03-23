#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main()
{
    int fork_result;
	printf("Bienvenido al ejercicio\n");
	printf("\n");
	printf("Process Type                      PID       PPID\n");
	fork();
	fork();
    fork_result = fork();
    if (fork_result >= 1)
    {
        printf("system process                    %d       %d \n", getpid(), getppid());
    }
    else if (fork_result == 0)
    {
        printf("system process                    %d       %d \n", getpid(), getppid());
    }
    else
    {
        printf("Error al crear el proceso\n");
    }
    return 0;
}
