#include<stdio.h>
#include<unistd.h> 
#include<pthread.h>
#include<semaphore.h>

void *fun1();
void *fun2();
int shared=1; //shared variable
sem_t s; //semaphore variable
 
int main()
{
  sem_init(&s,0,1); /*initialize semaphore variable 
/*        1. Address of variable, 
          2. Number of processes sharing semaphore, 
          3. Initial value of semaphore variable*/

 pthread_t thread1, thread2;//initializing two threads that will use a shared variable

 pthread_create(&thread1, NULL, fun1, NULL);//creating threads
 pthread_create(&thread2, NULL, fun2, NULL);
 pthread_join(thread1, NULL);
 pthread_join(thread2,NULL);

 printf("Final value of shared is %d\n",shared); //prints the last updated value of shared variable
 }

void *fun1()
{
    int x;
    sem_wait(&s); //executes wait operation on s
    /*wait(S) 
       { 
          while (S = 0); //here S = 1
          S--;  //now S = 0
        }*/

    x=shared;//thread1 reads value of shared variable x=5
    printf("Thread1 reads the value as %d\n",x);

    x++;  //thread1 increments its value (x=6)
    printf("Local updation by Thread1: %d\n",x);

    sleep(1); //thread1 is preempted by thread 2
    
    shared=x; //thread one updates the value of shared variable shared=6
    printf("Value of shared variable updated by Thread1 is: %d\n",shared);    
    sem_post(&s); //S=1
    /*
     signal(S) 
      { 
       S++; 
      }

    */
}
void *fun2()
{
    int y;
    sem_wait(&s); 
    /*wait(S) 
       { 
          while (S = 0); //here S = 0, it will wait now
          S--;  //
        }*/
    y=shared;//thread2 reads value of shared variable shared = 6
    printf("Thread2 reads the value as %d\n",y);

    y--;  //thread2 increments its value (5)
    printf("Local updation by Thread2: %d\n",y);

    sleep(1); //thread2 is preempted by thread 1
    
    shared=y; //thread2 updates the value of shared variable
    printf("Value of shared variable updated by Thread2 is: %d\n",shared);
    sem_post(&s);
}