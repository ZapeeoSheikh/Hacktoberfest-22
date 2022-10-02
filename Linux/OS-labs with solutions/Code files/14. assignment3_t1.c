#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
 

int main(void) {
  pid_t pid = fork();
 
  if(pid == 0) {
    printf("Hello from the child\n");
    exit(EXIT_SUCCESS);
  }
  else if(pid > 0) {
    printf("Parent is blocked....waiting to complete the child process...\n");
    wait(NULL);
    printf("Child Completed!!!\n");
  }
  else {
    printf("Process creation was unsuccesful.");
  }
 
  return EXIT_SUCCESS;
}