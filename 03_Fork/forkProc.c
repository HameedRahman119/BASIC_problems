#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;

    pid = fork();

    if(pid == 0)
        printf("Child Process\n");
    else
        printf("Parent Process\n");

    return 0;
}
