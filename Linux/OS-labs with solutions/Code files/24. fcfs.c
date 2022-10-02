#include<stdio.h>
 
 int main() 
{
    int n,burstTime[5],waitTime[5],turnAroundTime[5],avgWaitTime=0,avgTurnAroundTime=0,i,j;

    printf("Enter total number of processes (maximum 5):");
    scanf("%d",&n);
 
    printf("\nEnter Process Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&burstTime[i]);
    }
 
    waitTime[0]=0; //waiting time is zero for P1  
 
    for(i=1;i<n;i++)
    {
        waitTime[i]=0;
        for(j=0;j<i;j++)
            waitTime[i]+=burstTime[j]; //Turnaround time = Burst time + Waiting time
    }
 
    printf("\nProcess \t Burst Time \t Waiting Time \t Turnaround Time");
 
    for(i=0;i<n;i++)
    {
        turnAroundTime[i]=burstTime[i]+waitTime[i];
        avgWaitTime+=waitTime[i];
        avgTurnAroundTime+=turnAroundTime[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,burstTime[i],waitTime[i],turnAroundTime[i]);
    }
 
    avgWaitTime/=i;
    avgTurnAroundTime/=i;
    printf("\n\nAverage Waiting Time:%d",avgWaitTime);
    printf("\nAverage Turnaround Time:%d",avgTurnAroundTime);
 
    return 0;
}