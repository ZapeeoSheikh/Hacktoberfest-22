#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
 
int main(void) {
  pid_t pid = fork();
 
  if(pid == 0) {
    printf("Hello i am a child process");
    exit(EXIT_SUCCESS);
  }
  else if(pid > 0) {
    printf("Hello i am a parent process and I am \n");
    printf("Waiting for child process to finish.\n");

    wait(NULL);//wait for the child to finish
    printf("Child process finished.\n");
  }
  else {
    printf("Unable to create child process.\n");
  }
 
  return EXIT_SUCCESS;
}