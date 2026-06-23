#include <stdio.h>
#include <pthread.h>

void *fun(void *arg)
{
    printf("Hello Thread\n");
    return NULL;
}

int main()
{
    pthread_t t1;

    pthread_create(&t1,NULL,fun,NULL);

    pthread_join(t1,NULL);

    return 0;
}
