#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("PID of currentProcess.c = %d\n", getpid()); //print ID of current process
    
    //int execv(const char* path, const char* argv[])

    char *args[] = {"Passing", "an", "array", NULL}; //create an array of character pointers
    
    //execv() takes the file name and the character pointer array as its argument
    execv("./newProcess", args);

    printf("Back to currentprocess.c");
    return 0;
}