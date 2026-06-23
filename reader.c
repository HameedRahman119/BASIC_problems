#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    char buf[20];

    fd = open("myfifo", O_RDONLY);

    read(fd, buf, 11);

    printf("Message = %s\n", buf);

    close(fd);

    return 0;
}
