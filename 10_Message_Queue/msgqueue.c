#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct msg
{
    long type;
    char text[100];
};

int main()
{
    int msgid;
    struct msg m;

    msgid = msgget(1234, 0666 | IPC_CREAT);

    m.type = 1;
    strcpy(m.text, "Hello Queue");

    msgsnd(msgid, &m, sizeof(m.text), 0);

    msgrcv(msgid, &m, sizeof(m.text), 1, 0);

    printf("%s\n", m.text);

    return 0;
}
