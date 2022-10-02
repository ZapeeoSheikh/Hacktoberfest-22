#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
 

int main(void) {
  
 


  pid_t p1 = fork();
  pid_t p2 = fork();
  pid_t p3 = fork();
  pid_t p4 = fork();
  pid_t p5 = fork();
  pid_t p6 = fork();
  pid_t p7 = fork();
  pid_t p8 = fork();
  pid_t p9 = fork();
  pid_t p10 = fork(f);
    

  if(p1 == 0) {
    printf("1 Child Process is running\n");
    printf("proccess id is %d\n",p1);
    exit(EXIT_SUCCESS);
  }else if(p2==0)
  {
    printf("2 Child Process is running\n");
    printf("proccess id is %d\n",p2);
    exit(EXIT_SUCCESS);
  }else if(p3==0)
  {
    printf("3 Child Process is running\n");
    printf("proccess id is %d\n",p3);
    exit(EXIT_SUCCESS);
  }
  else if(p4==0)
  {
    printf("4 Child Process is running\n");
    printf("proccess id is %d\n",p4);
    exit(EXIT_SUCCESS);
  }else if(p5==0)
  {
    printf("5 Child Process is running\n");
    printf("proccess id is %d\n",p5);
    exit(EXIT_SUCCESS);
  }else if(p6==0)
  {
    printf("6 Child Process is running\n");
    printf("proccess id is %d\n",p6);
    exit(EXIT_SUCCESS);
  }else if(p7==0)
  {
    printf("7 Child Process is running\n");
    printf("proccess id is %d\n",p7);
    exit(EXIT_SUCCESS);
  }else if(p8==0)
  {
    printf("8 Child Process is running\n");
    printf("proccess id is %d\n",p8);
    exit(EXIT_SUCCESS);
  }else if(p9==0)
  {
    printf("9 Child Process is running\n");
    printf("proccess id is %d\n",p9);
    exit(EXIT_SUCCESS);
  }else if(p10==0)
  {
    printf("10 Child Process is running\n");
    printf("proccess id is %d\n",p10);
    exit(EXIT_SUCCESS);
  }
  else{
    printf("Parent is blocked....waiting to complete the child process...\n");
    wait(NULL);
    printf("Child Completed!!!\n");
  }
 
  return EXIT_SUCCESS;
}
