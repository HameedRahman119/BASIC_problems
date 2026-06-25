#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main()
{
    int sfd;

    struct sockaddr_in server;

    sfd = socket(AF_INET, SOCK_DGRAM, 0);

    server.sin_family = AF_INET;
    server.sin_port = htons(5000);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    sendto(sfd, "Hello UDP", 10, 0,
           (struct sockaddr *)&server,
           sizeof(server));

    close(sfd);

    return 0;
}
