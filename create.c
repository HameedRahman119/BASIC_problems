#include <stdio.h>
#include <sys/stat.h>

int main()
{
    mkfifo("myfifo", 0666);
    printf("FIFO Created\n");
    return 0;}
