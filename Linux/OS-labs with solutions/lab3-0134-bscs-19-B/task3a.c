#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
pid_t pid=fork();
if(pid==0){
 printf("Hello!from the child process");
 exit(EXIT_SUCCESS);
 }
 else if(pid>0){
 wait(NULL);
 }
 else
 printf("Process creation was unsucessfull");
}
