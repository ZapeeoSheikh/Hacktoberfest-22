#include "protocol.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <string.h>
int main()
{
    //opening shared memory for read only
    int fd = shm_open(NAME,O_RDONLY,0666);

    if(fd<0)
    {
        perror("shm_open error");
        return EXIT_FAILURE;
    }
    
    ftruncate(fd,SIZE);
    
    char *data = (char *)mmap(0,SIZE,PROT_READ,MAP_SHARED,fd,0);
    
    printf("address : %p\n",data);

    printf("Client reads: %s\n",data);
    munmap(data,SIZE);
    close(fd);
    shm_unlink(NAME);
    return EXIT_SUCCESS;
}
