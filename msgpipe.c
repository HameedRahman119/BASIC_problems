#include <stdio.h>
#include <unistd.h>

int main()
{
    int fd[2];
    char buf[20];

    pipe(fd);

    if(fork()==0)
    {
        read(fd[0],buf,12);
        printf("%s\n",buf);
    }
    else
    {
        write(fd[1],"Hello Child",12);
    }

    return 0;
}
