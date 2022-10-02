#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

void childTask(){
char *args[] = {"Passing","an","array",NULL};
if (execv("./read-file.c", args) ==-1 ){
printf("Process creation unsuccessfull");
 exit(EXIT_SUCCESS);
}
}

int main(int argc, char *argv[])//main(void)
{
 pid_t pid = fork();
 if(pid ==0){
 childTask();
 //exit(EXIT_SUCCESS);
 }
}
