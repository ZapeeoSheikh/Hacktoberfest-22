#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

// the work to be done by the thread is defined in this function
 void *thread_function() {    

    printf("I am a thread\n");
    int i;
        for( i=0; i<5; i++)
        {
            printf("%d\n",i);
            sleep(1);//delay the output by one second
        }
 }

 int main() {
    pthread_t a_thread;  //declare a thread 

    pthread_create(&a_thread, NULL, thread_function, NULL);//thread is created
/*  1. Address of the new thread, 
    2. Attributes of the thread, which is generally NULL 
    3. Name the function which the thread will execute. 
    4. Input to that function. If the function in the third parameter does not take 
    any input then the fourth parameter will be NULL.*/
    
    pthread_join(a_thread, NULL); //process waits for thread to finish . 

    printf("I am the main process\n");
    int j;
    for( j=20; j<25; j++)
    {
        printf("%d\n",j);
        sleep(1);
    }
 }//end main 

/*Note: To compile any program which involves creation of thread(s) 
 use pthread library (lpthread)

$gcc createAThread.c -lpthread

To run the command remains same
$./a.out
*/

