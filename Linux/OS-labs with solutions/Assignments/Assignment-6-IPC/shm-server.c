#include "protocol.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <string.h>
int main()
{
    //NAME is a Constant defined in the header file
    //O_CREATE means create only if not exist and 
    //O_EXCL | O_RDWR means opening shared memory for read and write.
    //Shared memory object fd will be created by the code line below
    //Permissions of 600 means that the owner has full read and write access to the file,
    int fd = shm_open(NAME,O_CREAT | O_EXCL | O_RDWR,0600);

    if(fd<0)
    {
        perror("shm_open error");
        return EXIT_FAILURE;
    }
    
    //In this function fd is shared memory object and SIZE is constant 
    //memory bytes to be shared i.e. 16
    ftruncate(fd,SIZE);
	
    //data pointer is created to the new shared memory 
    char *data = (char *)mmap(0,SIZE,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
    
    printf("address : %p\n",data);

    char str[100]="Sample string";
    
    strcpy(data,str);
        
   //Server after sending data to shared memory will unmap memory with below method
   //In the method below, data is a pointer to the shared memory and 
   //SIZE (constant) is total no. of bytes that was shared
    munmap(data,SIZE);
    close(fd);
    return EXIT_SUCCESS;
}
