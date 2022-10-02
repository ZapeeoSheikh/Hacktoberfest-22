#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("We are in the New Process now\n");

    printf("PID of New Process is = %d\n", getpid());
    
    return 0;
}