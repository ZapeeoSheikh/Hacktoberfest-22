#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>
#include <sys/shm.h>

#define KEY 594
#define SIZE 16
int main()
{
    int shmid = shmget(KEY, SIZE, IPC_CREAT | 0777);
    char *ptr = shmat(shmid, NULL, 0777);
    printf("%s", ptr);
    return 0;
}