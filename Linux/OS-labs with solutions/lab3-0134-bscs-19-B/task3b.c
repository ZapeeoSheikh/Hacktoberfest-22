#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
 for(int i=1;i<=10; i++)
{
  printf("%d",i);
  
}
fork();
exit(EXIT_SUCCESS);
}
